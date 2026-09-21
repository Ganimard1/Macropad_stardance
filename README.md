# Mcrpd
This is a rather elementary macropad featuring 3 keys, a rotary encoder, an OLED screen, and 4 leds with QMK based firmware and via support. It's my first hardware project ever and is designed as a submission for the Hackpad V5 as part of the stardance challenge. The keys on either end play the previous and next media and the middle one is just alt+tab. The rotary encoder controls system volume and the LEDs and OLED screen are for asthetic purposes. I do want to mention here, since this is my first hardware project and I've no prior experience with hardware some AI was used to help me navigate new and unfamiliar tools such as kicad.

## PCB & Schematic
The PCB includes a mounting hole that isn't actually a mounting hole. I thought that would be pretty funny(Kicanvas link: https://kicanvas.org/?repo=https%3A%2F%2Fgithub.com%2FGanimard1%2FMcrpd_stardance%2Ftree%2Fmain%2FPCB) . I had to reroute this like 30 times and am really proud of how it turned out (0 DRC errors FINALLY):<img width="1919" height="1079" alt="image" src="https://github.com/user-attachments/assets/f0a4ede9-e4a1-4e93-acd4-be44903104c0" />

<img width="1919" height="1079" alt="image" src="https://github.com/user-attachments/assets/8c0ae0d4-7b87-4e44-bfe1-cc65ceaede05" />

### Case
I didn't want to obscure most of the macropad and wanted the PCB to show so I ended up with this design. The little rectangle above the MCU is a little shroud thing I added and is to be glued on after the PCB is placed inside the case:<img width="1919" height="1079" alt="image" src="https://github.com/user-attachments/assets/fd20798d-4fd4-4e4d-ad31-cae69fcc73b8" />

#### BOM:
1x Seeed XIAO RP2040

4x SK 6182 mini-e LEDs

1x EC11E rotary encoder

1x 0.91 inch OLED display(128x32)

3x keycaps

3x MX-type switches or equivalent

4x M3x16mm screws

