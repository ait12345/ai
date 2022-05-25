import java.util.*;
import javax.crypto.*;
import java.security.*;
import java.io.*;
import java.security.spec.*;

class AES{
 public static void main(String[] args) throws IOException, NoSuchAlgorithmException,
InvalidKeyException, InvalidKeySpecException, NoSuchPaddingException, IllegalBlockSizeException,
BadPaddingException {

 String message="AES Encryption";
 byte[] myMessage =message.getBytes();
 KeyGenerator Mygenerator = KeyGenerator.getInstance("AES");
 SecretKey myDesKey = Mygenerator.generateKey();
 Cipher myCipher = Cipher.getInstance("AES");
 myCipher.init(Cipher.ENCRYPT_MODE, myDesKey);
 byte[] myEncryptedBytes=myCipher.doFinal(myMessage);
 myCipher.init(Cipher.DECRYPT_MODE, myDesKey);
 byte[] myDecryptedBytes=myCipher.doFinal(myEncryptedBytes);
 String encrypteddata=new String(myEncryptedBytes);
 String decrypteddata=new String(myDecryptedBytes);
 System.out.println("Message : "+ message+"\n");
 System.out.println("Encrypted - "+ encrypteddata+"\n");
 System.out.println("Decrypted Message - "+ decrypteddata);
 }
}