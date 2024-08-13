# Frappe Installation on Kali Linux: A Step-by-Step Guide

---

**Command:** `vim ~/.zshrc`

**Output:** No output (this command opens the `.zshrc` file in the Vim editor for editing).

`export PATH=$PATH:/home/param/.local/bin`

Copy this in the last of the file (this command sets the `PATH` environment variable for the current session).

**Command:** `source ~/.zshrc`

**Output:** No output (this command reloads the `.zshrc` file to apply changes made to the shell configuration).

---

**Command:** `sudo apt-get update`

**Output:**
```
[sudo] password for param: 
Hit:1 https://brave-browser-apt-release.s3.brave.com stable InRelease
Hit:2 https://packages.microsoft.com/repos/code stable InRelease                
Get:3 https://download.docker.com/linux/debian bullseye InRelease [43.3 kB]     
Hit:4 https://dl.google.com/linux/chrome/deb stable InRelease                   
Get:5 https://download.docker.com/linux/debian bullseye/stable amd64 Packages [42.2 kB]
Hit:6 http://http.kali.org/kali kali-rolling InRelease    
Fetched 85.5 kB in 2s (44.8 kB/s)
Reading package lists... Done
```

---

**Command:** `sudo apt-get install ca-certificates curl -y`

**Output:**
```
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
ca-certificates is already the newest version (20240203).
The following additional packages will be installed:
  gnutls-bin libcurl3t64-gnutls libcurl4t64 libgnutls-dane0t64 libgnutls30t64 libhogweed6t64 libnettle8t64 libnghttp3-9 libngtcp2-16
  libngtcp2-crypto-gnutls8
The following NEW packages will be installed:
  libnghttp3-9 libngtcp2-16 libngtcp2-crypto-gnutls8
The following packages will be upgraded:
  curl gnutls-bin libcurl3t64-gnutls libcurl4t64 libgnutls-dane0t64
  libgnutls30t64 libhogweed6t64 libnettle8t64
8 upgraded, 3 newly installed, 0 to remove and 739 not upgraded.
Need to get 3201 kB/4646 kB of archives.
After this operation, 741 kB of additional disk space will be used.
Get:1 http://kali.download/kali kali-rolling/main amd64 libnettle8t64 amd64 3.10-1 [303 kB]
Get:2 http://kali.download/kali kali-rolling/main amd64 libhogweed6t64 amd64 3.10-1 [334 kB]
Get:3 http://kali.download/kali kali-rolling/main amd64 libgnutls-dane0t64 amd64 3.8.6-2 [439 kB]
Get:4 http://kali.download/kali kali-rolling/main amd64 libnghttp3-9 amd64 1.4.0-1 [63.1 kB]
Get:5 http://kali.download/kali kali-rolling/main amd64 libngtcp2-16 amd64 1.6.0-1 [122 kB]
Get:6 http://kali.download/kali kali-rolling/main amd64 libngtcp2-crypto-gnutls8 amd64 1.6.0-1 [19.6 kB]
Get:7 http://kali.download/kali kali-rolling/main amd64 libcurl3t64-gnutls amd64 8.8.0-4 [451 kB]                                                                      
Get:8 http://kali.download/kali kali-rolling/main amd64 curl amd64 8.8.0-4 [349 kB]                                                                                    
Get:9 http://mirrors.neusoft.edu.cn/kali kali-rolling/main amd64 gnutls-bin amd64 3.8.6-2 [676 kB]                                                                     
Get:10 http://kali.download/kali kali-rolling/main amd64 libcurl4t64 amd64 8.8.0-4 [445 kB]                                                                            
Fetched 3201 kB in 10s (320 kB/s)                                                                                                                                      
(Reading database ... 414134 files and directories currently installed.)                                                                                               
Preparing to unpack .../libnettle8t64_3.10-1_amd64.deb ...                                                                                                             
Unpacking libnettle8t64:amd64 (3.10-1) over (3.9.1-2.2) ...                                                                                                            
Setting up libnettle8t64:amd64 (3.10-1) ...                                                                                                                            
(Reading database ... 414134 files and directories currently installed.)                                                                                               
Preparing to unpack .../libhogweed6t64_3.10-1_amd64.deb ...                                                                                                            
Unpacking libhogweed6t64:amd64 (3.10-1) over (3.9.1-2.2) ...                                                                                                           
Setting up libhogweed6t64:amd64 (3.10-1) ...                                                                                                                           
(Reading database ... 414134 files and directories currently installed.)                                                                                               
Preparing to unpack .../libgnutls-dane0t64_3.8.6-2_amd64.deb ...                                                                                                       
Unpacking libgnutls-dane0t64:amd64 (3.8.6-2) over (3.8.5-2) ...                                                                                                        
Preparing to unpack .../libgnutls30t64_3.8.6-2_amd64.deb ...                                                                                                           
Unpacking libgnutls30t64:amd64 (3.8.6-2) over (3.8.5-2) ...                                                                                                            
Setting up libgnutls30t64:amd64 (3.8.6-2) ...                                                                                                                          
Selecting previously unselected package libnghttp3-9:amd64.                                                                                                            
(Reading database ... 414134 files and directories currently installed.)                                                                                               
Preparing to unpack .../0-libnghttp3-9_1.4.0-1_amd64.deb ...                                                                                                           
Unpacking libnghttp3-9:amd64 (1.4.0-1) ...
Selecting previously unselected package libngtcp2-16:amd64.
Preparing to unpack .../1-libngtcp2-16_1.6.0-1_amd64.deb ...
Unpacking libngtcp2-16:amd64 (1.6.0-1) ...
Selecting previously unselected package libngtcp2-crypto-gnutls8:amd64.
Preparing to unpack .../2-libngtcp2-crypto-gnutls8_1.6.0-1_amd64.deb ...
Unpacking libngtcp2-crypto-gnutls8:amd64 (1.6.0-1) ...
Preparing to unpack .../3-libcurl3t64-gnutls_8.8.0-4_amd64.deb ...
Unpacking libcurl3t64-gnutls:amd64 (8.8.0-4) over (8.8.0-1) ...
Preparing to unpack .../4-curl_8.8.0-4_amd64.deb ...
Unpacking curl (8.8.0-4) over (8.8.0-1) ...
Preparing to unpack .../5-gnutls-bin_3.8.6-2_amd64.deb ...
Unpacking gnutls-bin (3.8.6-2) over (3.8.5-2) ...
Preparing to unpack .../6-libcurl4t64_8.8.0-4_amd64.deb ...
Unpacking libcurl4t64:amd64 (8.8.0-4) over (8.8.0-1) ...
Setting up libcurl4t64:amd64 (8.8.0-4) ...
Setting up libgnutls-dane0t64:amd64 (3.8.6-2) ...
Setting up libnghttp3-9:amd64 (1.4.0-1) ...
Setting up libngtcp2-16:amd64 (1.6.0-1) ...
Setting up libngtcp2-crypto-gnutls8:amd64 (1.6.0-1) ...
Setting up gnutls-bin (3.8.6-2) ...
Setting up libcurl3t64-gnutls:amd64 (8.8.0-4) ...
Setting up curl (8.8.0-4) ...
Processing triggers for libc-bin (2.38-13) ...
Processing triggers for man-db (2.12.1-1) ...
Processing triggers for kali-menu (2023.4.7) ...
```

---

**Command:** `sudo install -m 0755 -d /etc/apt/keyrings`

**Output:** No output (this command creates the `/etc/apt/keyrings` directory with the specified permissions).

---

**Command:** `sudo curl -fsSL https://download.docker.com/linux/debian/gpg -o /etc/apt/keyrings/docker.asc`

**Output:** No output (this command downloads the Docker GPG key and saves it to `/etc/apt/keyrings/docker.asc`).

---

**Command:** `sudo chmod a+r /etc/apt/keyrings/docker.asc`

**Output:** No output (this command sets read permissions for all users on the Docker GPG key file).

---

**Command**`sudo apt-get install docker.io`
**Output:**
```

```

---

**Command:** `systemctl enable docker --now`

**Output:**
```
Synchronizing state of docker.service with SysV service script with /usr/lib/systemd/systemd-sysv-install.
Executing: /usr/lib/systemd/systemd-sysv-install enable docker
```

---

**Command:** `sudo usermod -aG docker $USER`

**Output:** No output (this command adds the current user to the Docker group).

---

**Command:** `docker --version`

**Output:**
```
Docker version 20.10.25+dfsg1, build b82b9f3
```

---

**Command:** `docker run hello-world`

**Output:**
```
Hello from Docker!
This message shows that your installation appears to be working correctly.

To generate this message, Docker took the following steps:
 1. The Docker client contacted the Docker daemon.
 2. The Docker daemon pulled the "hello-world" image from the Docker Hub.
    (amd64)
 3. The Docker daemon created a new container from that image which runs the
    executable that produces the output you are currently reading.
 4. The Docker daemon streamed that output to the Docker client, which sent it
    to your terminal.

To try something more ambitious, you can run an Ubuntu container with:
 $ docker run -it ubuntu bash

Share images, automate workflows, and more with a free Docker ID:
 https://hub.docker.com/

For more examples and ideas, visit:
 https://docs.docker.com/get-started/
```

---

**Command:** `sudo apt install python-pip -y`

**Output:**
```
Reading package lists... Done
Building dependency tree       
Reading state information... Done
python3-pip is already the newest version (24.1.1+dfsg-1).
python3-pip set to manually installed.
The following packages were automatically installed and are no longer required:
  libslirp0 pigz slirp4netns
Use 'sudo apt autoremove' to remove them.
```

---

**Command:** `pip install frappe-manager --break-system-packages`

**Output:**
```
Defaulting to user installation because normal site-packages is not writeable
Collecting frappe-manager
  Downloading frappe_manager-0.16.0-py3-none-any.whl (1.8 MB)
     |████████████████████████████████| 1.8 MB 1.3 MB/s eta 0:00:00
Collecting certbot<3.0.0,>=2.9.0
  Downloading certbot-2.11.0-py3-none-any.whl (318 kB)
     |████████████████████████████████| 318 kB 2.3 MB/s eta 0:00:00
...
Collecting setuptools
  Downloading setuptools-68.1.2-py3-none-any.whl (1.2 MB)
     |████████████████████████████████| 1.2 MB 2.0 MB/s eta 0:00:00
Installing collected packages: certbot, setuptools, frappe-manager
Successfully installed certbot-2.11.0 frappe-manager-0.16.0 setuptools-68.1.2
```

---

### **Command:** `pip install frappe-bench`

**Output:**
```
Defaulting to user installation because normal site-packages is not writeable
Collecting frappe-bench
  Downloading frappe_bench-5.22.6-py3-none-any.whl.metadata (12 kB)
Requirement already satisfied: click>=7.0 in /usr/lib/python3/dist-packages (from frappe-bench) (8.1.7)
Requirement already satisfied: gitpython~=3.1.30 in /usr/lib/python3/dist-packages (from frappe-bench) (3.1.37)
Collecting honcho (from frappe-bench)
  Downloading honcho-1.1.0-py2.py3-none-any.whl.metadata (3.4 kB)
Requirement already satisfied: jinja2~=3.1.3 in /usr/lib/python3/dist-packages (from frappe-bench) (3.1.3)
Collecting python-crontab~=2.6.0 (from frappe-bench)
  Downloading python_crontab-2.6.0-py3-none-any.whl.metadata (15 kB)
Requirement already satisfied: requests in /usr/lib/python3/dist-packages (from frappe-bench) (2.31.0)
Collecting semantic-version~=2.8.2 (from frappe-bench)                                                                                                                 
  Downloading semantic_version-2.8.5-py2.py3-none-any.whl.metadata (10 kB)                                                                                             
Requirement already satisfied: setuptools>40.9.0 in /usr/lib/python3/dist-packages (from frappe-bench) (68.1.2)                                                        
Requirement already satisfied: gitdb<5,>=4.0.1 in /usr/lib/python3/dist-packages (from gitpython~=3.1.30->frappe-bench) (4.0.11)                                       
Requirement already satisfied: python-dateutil in /usr/lib/python3/dist-packages (from python-crontab~=2.6.0->frappe-bench) (2.9.0)                                    
Requirement already satisfied: six>=1.5 in /usr/lib/python3/dist-packages (from python-dateutil->python-crontab~=2.6.0->frappe-bench) (1.16.0)                         
Downloading frappe_bench-5.22.6-py3-none-any.whl (150 kB)                                                                                                              
   ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 151.0/151.0 kB 435.9 kB/s eta 0:00:00
Downloading python_crontab-2.6.0-py3-none-any.whl (25 kB)                                                                                                              
Downloading semantic_version-2.8.5-py2.py3-none-any.whl (15 kB)                                                                                                        
Downloading honcho-1.1.0-py2.py3-none-any.whl (21 kB)                                                                                                                  
Installing collected packages: honcho, semantic-version, python-crontab, frappe-bench                                                                                  
  WARNING: The script honcho is installed in '/home/param/.local/bin' which is not on PATH.                                                                            
  Consider adding this directory to PATH or, if you prefer to suppress this warning, use --no-warn-script-location.                                                    
  WARNING: The script bench is installed in '/home/param/.local/bin' which is not on PATH.                                                                             
  Consider adding this directory to PATH or, if you prefer to suppress this warning, use --no-warn-script-location.                                                    
Successfully installed frappe-bench-5.22.6 honcho-1.1.0 python-crontab-2.6.0 semantic-version-2.8.5
```

**Explanation:**
- **Command:** `pip install frappe-bench` installs the `frappe-bench` package along with its dependencies.
- **Output Details:**
  - **User Installation:** The installation defaults to user mode because the global site-packages directory is not writable.
  - **Dependencies:** Several dependencies are either installed or already present, such as `click`, `gitpython`, and `jinja2`.
  - **Warnings:** The installation adds scripts to `/home/param/.local/bin`, which is not in the system `PATH`. This might require manual adjustment to access these scripts from anywhere.

---

### **Command:** `time fm create param.org`

**Output:**
```
could not caputured.
```

**Explanation:**
- **Command:** `time fm create param.org` is used to time how long the `fm create param.org` command takes. This command seems to be creating a new site or project named `param.org`.
- **Output Details:** The output indicates that the execution result of the command could not be captured. This might be due to an issue with the command execution or output redirection.

---

### **Command:** `time fm create self update images`

**Output:**
```
✅ Pulled ghcr.io/rtcamp/frappe-manager-frappe:v0.15.0.
✅ Pulled ghcr.io/rtcamp/frappe-manager-nginx:v0.15.0.
✅ Pulled redis:6.2-alpine.
✅ Pulled mariadb:10.6.
✅ Pulled jwilder/nginx-proxy:1.6.
✅ Pulled ghcr.io/rtcamp/frappe-manager-mailhog:v0.8.3.
✅ Pulled adminer:4.

real    545.73s
user    11.06s
sys     1.32s
cpu     2%
```

**Explanation:**
- **Command:** `time fm create self update images` updates Docker images used by the Frappe Manager.
- **Output Details:**
  - **Images Pulled:** Various Docker images are pulled, including `frappe-manager`, `nginx`, `redis`, `mariadb`, and more.
  - **Timing Information:**
    - **real:** 545.73 seconds (total wall-clock time)
    - **user:** 11.06 seconds (CPU time spent in user mode)
    - **sys:** 1.32 seconds (CPU time spent in kernel mode)
    - **cpu:** 2% (percentage of CPU used)

---

### **Command:** `time fm create param.org`

**Output:**
```
✅ Created all required directories.
✅ Started bench services.
✅ Configured common_site_config.json
✅ Configured frappe server
✅ Configured supervisor configs
✅ Configured frappe app's branch -> version-15
✅ global-db:3306 is available after 0 seconds
✅ paramorg-redis-cache:6379 is available after 0 seconds
✅ paramorg-redis-queue:6379 is available after 0 seconds
✅ paramorg-redis-socketio:6379 is available after 0 seconds
✅ Removed prebaked app erpnext
✅ Removed prebaked app hrms
✅ Created bench site param.org
✅ Installed app frappe in site.
✅ Installed dev packages in env.
✅ Configured and Started dev services.
✅ Reloaded nginx.
✅ Configured Mailhog as default mail server.
✅ Enabled Admin-tools.
✅ Restarted frappe server
✅ Workers compose not present. Generating...
✅ Saved bench config.
✅ Bench site is active and responding.
┌───────────────────┬──────────────────────────────────────────────┐
│ Bench Url         │ http://param.org                             │
├───────────────────┼──────────────────────────────────────────────┤
│ Bench Root        │ /home/param/frappe/sites/param.org           │
├───────────────────┼──────────────────────────────────────────────┤
│ Frappe Username   │ administrator                                │
├───────────────────┼──────────────────────────────────────────────┤
│ Frappe Password   │ admin                                        │
├───────────────────┼──────────────────────────────────────────────┤
│ Root DB User      │ root                                         │
├───────────────────┼──────────────────────────────────────────────┤
│ Root DB Password  │ %o??%+I!O5@iMzd-TTq9_!F%_@_rK1!m             │
├───────────────────┼──────────────────────────────────────────────┤
│ Root DB Host      │ global-db                                    │
├───────────────────┼──────────────────────────────────────────────┤
│ DB Name           │ param-org                                    │
├───────────────────┼──────────────────────────────────────────────┤
│ DB User           │ param-org                                    │
├───────────────────┼──────────────────────────────────────────────┤
│ DB Password       │ 7cHSeVlzvUmAyOTi                             │
├───────────────────┼──────────────────────────────────────────────┤
│ Environment       │ dev                                          │
├───────────────────┼──────────────────────────────────────────────┤
│ HTTPS             │ Not Enabled                                  │
├───────────────────┼──────────────────────────────────────────────┤
│ Admin Tools       │ Tool       ┃ URL                             │
│                   │ ━━━━━━━━━━━╇━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ │
│                   │ Mailhog    │ http://param.org/mailhog        │
│                   │ ───────────┼──────────────────────────────── │
│                   │ Adminer    │ http://param.org/adminer        │
├───────────────────┼──────────────────────────────────────────────┤
│ Bench Apps        │ App                  ┃ Version               │
│                   │ ━━━━━━━━━━━━━━━━━━━━━╇━━━━━━━━━━━━━━━━━━━━━━ │
│                   │ frappe               │ 15.

37.0               │
├───────────────────┼──────────────────────────────────────────────┤
│ Bench Services    │  frappe            ✓    nginx             ✓  │
│                   │  redis-cache       ✓    redis-queue       ✓  │
│                   │  redis-socketio    ✓    schedule          ✓  │
│                   │  socketio          ✓                         │
├───────────────────┼──────────────────────────────────────────────┤
│ Bench Workers     │  long-worker       ✓    short-worker      ✓  │
├───────────────────┼──────────────────────────────────────────────┤
│ Bench Admin Tools │  adminer           ✓    mailhog           ✓  │
└───────────────────┴──────────────────────────────────────────────┘
✅ Please note that You will have to add a host entry to your system's hosts file
to access the bench locally.

real    402.80s
user    48.60s
sys     36.60s
cpu     21%
```

---

### **Additional Instruction:**

To ensure that you can access the bench site locally, you need to add an entry to your system's `/etc/hosts` file.

**Edit the file `/etc/hosts` and add the following line:**
```
127.0.0.1    param.org
```

**Updated File Example:**
```
127.0.0.1    localhost
127.0.0.1    param.org
```

**New line added is the last line as per above.**

This step maps the domain `param.org` to your local machine, allowing you to access the bench site via this domain name.

