### Summary and Setup for Make

#### What is Make?

Make is a versatile tool that runs commands to read files, process them, and write out the processed files. It's commonly used in software development to compile source code into executables or libraries, but it has other uses too, such as:

- Running analysis scripts on raw data to produce summary data files.
- Running visualization scripts on data files to produce plots.
- Parsing and combining text files and plots to create papers.

Make is known as a build tool because it builds data files, plots, papers, programs, or libraries. It can also update existing files if needed. Make tracks dependencies between files, so if a source file changes, Make will update all dependent files accordingly.

Many other build tools are available today, but they all follow the same principles as Make.

#### Prerequisites

To follow this lesson, you need some basic experience with using the Unix Shell to:

- List directories
- Create, copy, and remove files and directories
- Run simple scripts

#### Setup

To start, you'll need to download some files and ensure you have the required software installed.

##### Files

1. Download `make-lesson.zip`.
2. Move `make-lesson.zip` to a directory accessible via your bash shell.
3. Open a Bash shell window.
4. Navigate to the directory where you downloaded the file.
5. Unpack the zip file:
   ```sh
   $ unzip make-lesson.zip
   ```
6. Change into the make-lesson directory:
   ```sh
   $ cd make-lesson
   ```

##### Software

You need to have the following software installed:

###### GNU Make

- **Linux**: Make is usually pre-installed. Check with:
  ```sh
  $ make -v
  ```
  If not installed (e.g., on Debian), use:
  ```sh
  $ sudo apt-get install make
  ```

- **OSX**: Requires Xcode. Check with:
  ```sh
  $ make -v
  ```

- **Windows**: Use the Software Carpentry Windows installer.

###### Python

You need Python 2 or Python 3, along with Numpy and Matplotlib. The easiest way to get these is by installing Anaconda, which includes all necessary Python software.

### Introduction to Make

#### Overview

**Questions:**
- How can I make my results easier to reproduce?

**Objectives:**
- Explain what Make is for.
- Explain why Make differs from shell scripts.
- Name other popular build tools.

#### Exploring Zipf’s Law with Make

**Zipf’s Law:** 
The most frequently occurring word in a dataset occurs approximately twice as often as the second most frequent word.

To test Zipf’s Law, we will use a series of Python scripts to analyze some books. Our directory contains:

```plaintext
|- books
|  |- abyss.txt
|  |- isles.txt
|  |- last.txt
|  |- LICENSE_TEXTS.md
|  |- sierra.txt
|- plotcounts.py
|- countwords.py
|- testzipf.py
```

#### Steps to Process and Visualize Data

1. **Count Word Frequencies:**
   ```sh
   $ python countwords.py books/isles.txt isles.dat
   $ head -5 isles.dat
   ```
   Output:
   ```plaintext
   the 3822 6.7371760973
   of 2460 4.33632998414
   and 1723 3.03719372466
   to 1479 2.60708619778
   a 1308 2.30565838181
   ```

2. **Repeat for Another Book:**
   ```sh
   $ python countwords.py books/abyss.txt abyss.dat
   $ head -5 abyss.dat
   ```
   Output:
   ```plaintext
   the 4044 6.35449402891
   and 2807 4.41074795726
   of 1907 2.99654305468
   a 1594 2.50471401634
   to 1515 2.38057825267
   ```

3. **Visualize Word Frequencies:**
   - Text-based bar plot:
     ```sh
     $ python plotcounts.py isles.dat ascii
     ```
     Output:
     ```plaintext
     the   ########################################################################
     of    ##############################################
     and   ################################
     to    ############################
     a     #########################
     ```
   - Graphical plot:
     ```sh
     $ python plotcounts.py isles.dat show
     ```
   - Save plot as an image:
     ```sh
     $ python plotcounts.py isles.dat isles.png
     ```

4. **Test Zipf’s Law:**
   ```sh
   $ python testzipf.py abyss.dat isles.dat
   ```
   Output:
   ```plaintext
   Book    First   Second  Ratio
   abyss   4044    2807    1.44
   isles   3822    2460    1.55
   ```

#### Automating the Workflow with Shell Script

Create `run_pipeline.sh`:
```sh
# USAGE: bash run_pipeline.sh
# to produce plots for isles and abyss
# and the summary table for the Zipf's law tests

python countwords.py books/isles.txt isles.dat
python countwords.py books/abyss.txt abyss.dat

python plotcounts.py isles.dat isles.png
python plotcounts.py abyss.dat abyss.png

# Generate summary table
python testzipf.py abyss.dat isles.dat > results.txt
```

Run the script:
```sh
$ bash run_pipeline.sh
$ cat results.txt
```

**Benefits:**
- Documents the pipeline explicitly.
- Allows full analysis with a single command.
- Prevents repeated typos and mistakes.

**Limitations:**
- Manual re-running can be cumbersome.

#### Advantages of Make Over Shell Scripts

Make allows for an executable description of the pipeline, automatically determining which steps need to be rerun based on file dependencies.

**Make Applications:**
- Analysis scripts on raw data.
- Visualization scripts to produce plots.
- Combining text files and plots to create papers.
- Compiling source code into executables or libraries.

**Other Popular Build Tools:**
- Apache ANT
- doit
- nmake (Windows)

**Build Generation Scripts:**
- GNU Autoconf
- CMake

**Why Use Make?**
- Despite its age, Make is still widely used due to its efficiency and ability to manage workflows.
- Researchers working with legacy codes or needing reproducible workflows often use Make.

**GNU Make:**
- Free-libre, fast, well-documented, and very popular.

**Key Points:**
- Make specifies dependencies and updates out-of-date files efficiently.

### Makefiles

**Last updated on 2023-04-24**

---

### Overview

#### Questions
- How do I write a simple Makefile?

#### Objectives
- Recognize the key parts of a Makefile: rules, targets, dependencies, and actions.
- Write a simple Makefile.
- Run Make from the shell.
- Explain when and why to mark targets as `.PHONY`.
- Explain constraints on dependencies.

---

### Writing a Simple Makefile

Create a file named `Makefile` with the following content:

```makefile
# Count words.
isles.dat : books/isles.txt
    python countwords.py books/isles.txt isles.dat
```

#### Explanation of the Makefile:
- `#`: Denotes a comment.
- `isles.dat`: A target, a file to be created.
- `books/isles.txt`: A dependency, a file needed to create the target.
- `:`: Separates targets from dependencies.
- `python countwords.py books/isles.txt isles.dat`: An action to build the target using the dependency.
- The action must be indented using a single TAB character.

### Running Make

Ensure you start from scratch:

```bash
$ rm *.dat *.png
```

Run Make:

```bash
$ make
```

Expected output:

```bash
python countwords.py books/isles.txt isles.dat
```

If you encounter an error regarding missing separators, ensure you used a TAB character to indent the action.

Check the results:

```bash
$ head -5 isles.dat
```

#### Makefile Naming
You don't have to name your file `Makefile`. If named differently, use the `-f` flag to specify the file:

```bash
$ make -f MyOtherMakefile
```

### Handling Updates

Update a file's timestamp:

```bash
$ touch books/isles.txt
```

Check timestamps:

```bash
$ ls -l books/isles.txt isles.dat
```

Run Make again:

```bash
$ make
```

Expected output:

```bash
python countwords.py books/isles.txt isles.dat
```

### Adding More Rules

Add another rule to your `Makefile`:

```makefile
abyss.dat : books/abyss.txt
    python countwords.py books/abyss.txt abyss.dat
```

Run Make specifying the new target:

```bash
$ make abyss.dat
```

Expected output:

```bash
python countwords.py books/abyss.txt abyss.dat
```

### Handling Cleanups

Add a clean target:

```makefile
.PHONY : clean
clean :
    rm -f *.dat
```

Run the clean target:

```bash
$ make clean
```

Expected output:

```bash
rm -f *.dat
```

### Creating a Default Target

Add a `dats` target:

```makefile
.PHONY : dats
dats : isles.dat abyss.dat
```

Run the default target:

```bash
$ make dats
```

Expected output:

```bash
python countwords.py books/isles.txt isles.dat
python countwords.py books/abyss.txt abyss.dat
```

### Full Example of the Makefile

```makefile
# Count words.
.PHONY : dats
dats : isles.dat abyss.dat

isles.dat : books/isles.txt
    python countwords.py books/isles.txt isles.dat

abyss.dat : books/abyss.txt
    python countwords.py books/abyss.txt abyss.dat

.PHONY : clean
clean :
    rm -f *.dat
```

### Write New Rules

1. Add a rule for `last.dat`:

    ```makefile
    last.dat : books/last.txt
        python countwords.py books/last.txt last.dat
    ```

2. Update `dats`:

    ```makefile
    dats : isles.dat abyss.dat last.dat
    ```

3. Add a rule for `results.txt`:

    ```makefile
    .PHONY : results
    results : isles.dat abyss.dat last.dat
        python testzipf.py abyss.dat isles.dat last.dat > results.txt
    ```

4. Update `clean` to remove `results.txt`:

    ```makefile
    clean :
        rm -f *.dat results.txt
    ```

### Final Makefile

```makefile
# Count words.
.PHONY : dats
dats : isles.dat abyss.dat last.dat

isles.dat : books/isles.txt
    python countwords.py books/isles.txt isles.dat

abyss.dat : books/abyss.txt
    python countwords.py books/abyss.txt abyss.dat

last.dat : books/last.txt
    python countwords.py books/last.txt last.dat

.PHONY : results
results : isles.dat abyss.dat last.dat
    python testzipf.py abyss.dat isles.dat last.dat > results.txt

.PHONY : clean
clean :
    rm -f *.dat results.txt
```

---

### Key Points

- Use `#` for comments in Makefiles.
- Write rules as `target: dependencies`.
- Specify update actions in a tab-indented block under the rule.
- Use `.PHONY` to mark targets that don’t correspond to files.
