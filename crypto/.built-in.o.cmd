cmd_crypto/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o crypto/built-in.o crypto/crypto.o crypto/crypto_wq.o crypto/fips.o crypto/crypto_algapi.o crypto/aead.o crypto/crypto_blkcipher.o crypto/chainiv.o crypto/eseqiv.o crypto/seqiv.o crypto/crypto_hash.o crypto/pcompress.o crypto/cryptodev/built-in.o crypto/cryptomgr.o crypto/crypto_user.o crypto/hmac.o crypto/crypto_null.o crypto/md4.o crypto/md5.o crypto/rmd128.o crypto/rmd160.o crypto/rmd256.o crypto/rmd320.o crypto/sha1_generic.o crypto/sha256_generic.o crypto/sha512_generic.o crypto/wp512.o crypto/tgr192.o crypto/gf128mul.o crypto/ecb.o crypto/cbc.o crypto/cts.o crypto/lrw.o crypto/xts.o crypto/ctr.o crypto/gcm.o crypto/ccm.o crypto/cryptd.o crypto/des_generic.o crypto/blowfish_generic.o crypto/blowfish_common.o crypto/twofish_generic.o crypto/twofish_common.o crypto/aes_generic.o crypto/camellia_generic.o crypto/michael_mic.o crypto/crc32c.o crypto/crct10dif_common.o crypto/crct10dif_generic.o crypto/authenc.o crypto/authencesn.o crypto/rng.o crypto/krng.o crypto/ansi_cprng.o crypto/ghash-generic.o crypto/af_alg.o crypto/algif_hash.o crypto/algif_skcipher.o crypto/ablk_helper.o 
