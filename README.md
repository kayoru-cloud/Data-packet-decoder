# Packet Encoder and Decoder in C

This beginner-level project simulates how binary data packets can be **framed, written**, and **decoded** just like real-world systems such as network protocols or embedded serial communication.

> This is a **foundation project** I’ll be improving as I learn more about low-level programming, file handling, and protocols.

---

##  What This Project Does

1. **Encodes data** (int, float, string) into a binary file (`stream.bin`)
2. **Frames each packet** using sync bytes (`0xAA`, `0x55`) for easy detection
3. **Includes a type tag, length**, and **checksum** for validation
4. **Reads the file byte-by-byte**, detecting packets and decoding them

---

##  Concepts Practiced

- `fread()`, `fwrite()` for binary file I/O
- Unions, enums, structs for flexible data types
- Byte-by-byte stream decoding (like UART or TCP)
- Checksum validation for data integrity
- Safe copying of binary data using `memcpy()`

---

## Packet Format

Each packet in the binary stream has the following structure:

| Field     | Size     | Description                      |
|-----------|----------|----------------------------------|
| Sync 1    | 1 byte   | 0xAA                             |
| Sync 2    | 1 byte   | 0x55                             |
| Type      | 1 byte   | 1 = int, 2 = float, 3 = string   |
| Length    | 1 byte   | Number of bytes in payload       |
| Payload   | N bytes  | Actual data                      |
| Checksum  | 1 byte   | XOR of all previous bytes        |

---



