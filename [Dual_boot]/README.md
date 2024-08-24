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

1. **Visit the Download Page:** Access the Debian 12 ISO at [Debian CD Image](https://cdimage.debian.org/debian-cd/current/amd64/iso-cd/debian-12.6.0-amd64-netinst.iso).

2. **Verify the ISO:** Optionally, check the SHA256 hash against Debian's provided values to ensure the ISO's integrity.

### **2. Create a Bootable USB Drive**

Prepare a bootable USB drive using the Debian ISO:

1. **Download Rufus:** Obtain Rufus from [Rufus Official Site](https://github.com/pbatard/rufus/releases/download/v4.5/rufus-4.5.exe).

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
   - Use Disk Management (in Windows) to shrink an existing partition, freeing up at least 20 GB.

3. **Create New Partition:**
   - In the unallocated space, create a new partition formatted to ext4, or leave it unallocated for the Debian installer to handle.

### **4. Install Debian**

With the bootable USB drive ready, proceed with installation:

1. **Boot from USB:**
   - Restart your computer and set the BIOS/UEFI to boot from the USB drive.

2. **Start the Installer:**
   - Choose “Install” or “Graphical Install” from the boot menu.

3. **Follow the Installation Wizard:**
   - **Language & Locale:** Select your language and location.
   - **Keyboard Layout:** Choose the appropriate keyboard layout.
   - **Network Configuration:** Configure network settings if prompted.
   - **Partitioning:** Choose “Manual” to select the prepared partition, or “Guided” for automatic partitioning. Ensure the correct partition is selected for dual boot.
   - **Install Base System:** Debian will copy necessary files to your system.
   - **Package Selection:** Opt for default packages or customize as needed.
   - **Install GRUB Bootloader:** Install GRUB on the primary disk to manage boot options.

4. **Complete Installation:**
   - Remove the USB drive when prompted and reboot your computer.

5. **Post-Installation:**
   - Upon reboot, the GRUB menu should appear, allowing you to select between Debian and other installed operating systems.

Congratulations on successfully installing Debian 12 Bookworm! Explore your new Debian environment and feel free to seek additional help or consult forums if needed.
