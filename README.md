```shell
# esp32
& set IDF_PATH='C:\Users\Administrator\Desktop\esp-idf\v5.2.3\esp-idf'
& 'c:\Espressif\tools\python_env\idf5.2_py3.11_env\Scripts\python.exe' 'c:\Users\Administrator\Desktop\esp-idf\v5.2.3\esp-idf\tools\idf_monitor.py' -p COM6 -b 115200 --toolchain-prefix xtensa-esp32-elf- --target esp32 'c:\Users\Administrator\Desktop\Document\EPS32s3\phone_clock\phone_clock\build\phone_clock.elf'

# esp32-s3
& set IDF_PATH='c:\Users\Administrator\Desktop\esp-idf\v5.2.3\esp-idf'
& 'c:\Espressif\tools\python_env\idf5.2_py3.11_env\Scripts\python.exe' 'c:\Users\Administrator\Desktop\esp-idf\v5.2.3\esp-idf\tools\idf_monitor.py' -p COM9 -b 115200 --toolchain-prefix xtensa-esp32s3-elf- --target esp32s3 'c:\Users\Administrator\Desktop\Document\EPS32s3\phone_clock\phone_clock\build\phone_clock.elf'

& 'c:\Espressif\tools\python_env\idf5.2_py3.11_env\Scripts\python.exe' 'c:\Users\Administrator\Desktop\esp-idf\v5.2.3\esp-idf\components\esptool_py\esptool\esptool.py' -p COM3 -b 460800 --before default_reset --after hard_reset --chip esp32s3 write_flash --flash_mode dio --flash_freq 40m --flash_size 8MB 0x0 'build\bootloader\bootloader.bin' 0x10000 'build\phone_clock.bin' 0x8000 'build\partition_table\partition-table.bin'

python gen_esp32part.py build/partition_table/partition-table.bin partitions.csv

export IDF_PATH=/install/esp/v5.3/esp-idf
export IDF_TOOLS_PATH=/install/esp/esp-idf/tools
$IDF_TOOLS_PATH/python_env/idf5.3_py3.12_env/bin/activate
python $IDF_TOOLS_PATH/idf.py menuconfig

# other method
$env:PATH += ";C:\Espressif\tools\xtensa-esp-elf-gdb\12.1_20231023\xtensa-esp-elf-gdb\bin"
$env:PATH += ";C:\Espressif\tools\riscv32-esp-elf-gdb\12.1_20231023\riscv32-esp-elf-gdb\bin"
$env:PATH += ";C:\Espressif\tools\xtensa-esp-elf\esp-13.2.0_20230928\xtensa-esp-elf\bin"
$env:PATH += ";C:\Espressif\tools\esp-clang\16.0.1-fe4f10a809\esp-clang\bin"
$env:PATH += ";C:\Espressif\tools\riscv32-esp-elf\esp-13.2.0_20230928\riscv32-esp-elf\bin"
$env:PATH += ";C:\Espressif\tools\esp32ulp-elf\2.35_20220830\esp32ulp-elf\bin"
$env:PATH += ";C:\Espressif\tools\cmake\3.24.0\bin"
$env:PATH += ";C:\Espressif\tools\openocd-esp32\v0.12.0-esp32-20230921\openocd-esp32\bin"
$env:PATH += ";C:\Espressif\tools\ninja\1.11.1"
$env:PATH += ";C:\Espressif\tools\idf-exe\1.0.3"
$env:PATH += ";C:\Espressif\tools\ccache\4.8\ccache-4.8-windows-x86_64"
$env:PATH += ";C:\Espressif\tools\dfu-util\0.11\dfu-util-0.11-win64"
$env:PATH += ";C:\Users\Administrator\Desktop\esp-idf\esp-idf-v5.2.1\tools"

& set IDF_PATH='C:\Users\Administrator\Desktop\esp-idf\v5.2.3\esp-idf'
& set IDF_PYTHON_ENV_PATH='C:\Espressif\tools\python_env\idf5.2_py3.11_env'

& "components\v5.2.3\esp-idf\export.bat"

& 'c:\Espressif\tools\python_env\idf5.2_py3.11_env\Scripts\python.exe' 'C:\Users\Administrator\Desktop\esp-idf\v5.2.3\esp-idf\tools\idf.py' fullclean
& 'c:\Espressif\tools\python_env\idf5.2_py3.11_env\Scripts\python.exe' 'C:\Users\Administrator\Desktop\esp-idf\v5.2.3\esp-idf\tools\idf.py' reconfigure
& 'c:\Espressif\tools\python_env\idf5.2_py3.11_env\Scripts\python.exe' 'C:\Users\Administrator\Desktop\esp-idf\v5.2.3\esp-idf\tools\idf.py' menuconfig
& 'c:\Espressif\tools\python_env\idf5.2_py3.11_env\Scripts\python.exe' 'C:\Users\Administrator\Desktop\esp-idf\v5.2.3\esp-idf\tools\idf.py' build
& 'c:\Espressif\tools\python_env\idf5.2_py3.11_env\Scripts\python.exe' 'C:\Users\Administrator\Desktop\esp-idf\v5.2.3\esp-idf\tools\idf.py' --port COM6 flash

```# phone_manager
