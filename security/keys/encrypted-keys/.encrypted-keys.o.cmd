cmd_security/keys/encrypted-keys/encrypted-keys.o := arm-linux-gnueabihf-ld -EL    -r -o security/keys/encrypted-keys/encrypted-keys.o security/keys/encrypted-keys/encrypted.o security/keys/encrypted-keys/ecryptfs_format.o security/keys/encrypted-keys/masterkey_trusted.o 