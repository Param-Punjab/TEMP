# **How to Install Debian 12 Bookworm: A Comprehensive Guide for Beginners (Including Dual Boot Setup)**

Welcome to this in-depth tutorial on installing Debian 12, also known as Bookworm. This guide is designed to assist both beginners and those looking to set up a dual-boot system with another operating system.

## **Minimum System Requirements**

Ensure your system meets the following minimum requirements for Debian 12:

- **RAM:** 4 GB or more.
- **Disk Space:** At least 50 GB of free space.
- **Processor:** 1.8 GHz or higher.

## **Steps for Installing Debian 12**

### **1. Download Debian 12 ISO Image**

Start by downloading the Debian 12 ISO image:

1. **Click here to Download Debian 12:** Access the Debian 12 ISO at [Debian CD Image](https://cdimage.debian.org/debian-cd/current/amd64/iso-cd/debian-12.6.0-amd64-netinst.iso).

### **2. Create a Bootable USB Drive**

Prepare a bootable USB drive using the Debian ISO:

1. **Download Rufus:** Obtain Rufus from [Rufus](https://github.com/pbatard/rufus/releases/download/v4.5/rufus-4.5.exe).

2. **Run Rufus:**
   - Launch Rufus and insert your USB drive.
   - Select the USB drive in Rufus.
   - Click “SELECT” and choose the Debian ISO file.
   - For "Partition scheme," select "MBR" for BIOS or "GPT" for UEFI systems.
   - Click “START” to create the bootable USB drive.

### **3. Prepare Partition for Dual Boot (Optional)**

If setting up a dual-boot system, prepare a partition:

1. **Backup Data:** Ensure important files are backed up before modifying partitions.

2. **Shrink Existing Partition:**
   - U3. **Select Installation Type**:
   - Choose **Graphical install**.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:635/h:410/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-8.png)

4. **Language Selection**:
   - Choose the language for the installation process.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:795/h:585/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-9.png)

5. **Location Selection**:
   - Set your location for time zone configuration.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:791/h:588/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-10.png)

6. **Keyboard Layout**:
   - Choose the appropriate keyboard layout based on your language.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:793/h:586/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-11.png)

7. **Configure Network**:
   - **Hostname**: Enter a name for your system.
   - **Domain Name**: Enter if applicable or leave it blank.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:791/h:587/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-12.png)
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:792/h:585/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-13.png)

8. **Additional Installation Files**:
   - Select **No** if no additional files are needed.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:787/h:590/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-14.png)

9. **Mirror Location**:
   - Select the nearest country for the Debian mirror list.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:795/h:588/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-15.png)

10. **Debian Archive Mirror**:
    - Choose the default mirror if no preference.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:794/h:584/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-16.png)

11. **Proxy Information**:
    - Enter if needed, otherwise leave blank.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:789/h:579/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-17.png)

12. **Begin Installation**:
    - Wait for the installation process (can take up to 30 minutes).
![Errir 404](https://ml9xdkwhf8c0.i.optimole.com/w:782/h:390/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-18.png)

13. **Create Admin User**:
    - Set up an admin user and password.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:790/h:580/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-19.png)

14. **Create Normal User**:
    - Create another user without admin rights if needed.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:791/h:589/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-20.png)
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:790/h:588/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-21.png)
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:793/h:592/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-22.png)

15. **Set Time Zone**:
    - Select the appropriate time zone based on your location.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:793/h:595/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-23.png)

16. **Partition Disks**:
    - Choose to manually create partitions or use the entire disk.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:790/h:586/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-24.png)
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:787/h:586/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-25.png)
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:789/h:592/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-26.png)

17. **Format Disk**:
    - Confirm the partition scheme and format the disk.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:793/h:590/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-27.png)
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:790/h:582/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-28.png)

18. **Popularity Contest**:
    - Choose whether to send system statistics to the Debian community.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:788/h:588/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-29.png)

19. **Select Desktop Environment**:
    - Choose a desktop environment (e.g., GNOME).
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:798/h:668/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-30.png)

20. **Install GRUB Bootloader**:
    - Install GRUB to manage the boot process.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:793/h:585/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-31.png)
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:781/h:570/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-32.png)

21. **Reboot System**:
    - Complete the installation by rebooting the system.
![Error 404](https://ml9xdkwhf8c0.i.optimole.com/w:791/h:591/q:mauto/f:best/https://itslinuxguide.com/wp-content/uploads/2024/03/word-image-182-33.png)

Following these steps will help you successfully install Debian 12 on VirtualBox, allowing you to explore and utilize the Debian operating system in a virtual environment. Disk Management (in Windows) to shrink an existing partition, freeing up at least 20 GB.

3. **Create New Partition:**
   - In the unallocated space, create a new partition formatted to ext4, or leave it unallocated for the Debian installer to handle.

### **4. Install Debian**

With the bootable USB drive ready, proceed with installation:

1. **Boot from USB:**
   - Restart your computer and set the BIOS/UEFI to boot from the USB drive.

2. **Start the Installer:**


Congratulations on successfully installing Debian 12 Bookworm! Explore your new Debian environment and feel free to seek additional help or consult forums if needed.
