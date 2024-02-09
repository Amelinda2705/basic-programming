import 'dart:io';

void main() {
  // 1. input dan output
  print("siapa nama kamu? ");
  String? nama = stdin.readLineSync();
  print("nama kamu adalah $nama");

  // 2. komentar
  /*
    komentar
  */

  // 3. variable dan tipe data
  num ipk = 13.89;
  int age = 17;
  double phi = 14.7;
  bool betul = true;
  String jurusan = "rpl";
  List names = ["amel", "imel", "umel", "emel", "omel"];
  Map amel = {"nama": "amel", "kelas": 11, "jurusan": "rpl"};

  // 4. operasi aritmatika
  int bil1 = 17;
  int bil2 = 8;
  print(bil1 + bil2);
  print(bil1 - bil2);
  print(bil1 * bil2);
  print(bil1 / bil2);
  print(bil1 % bil2);
  print(bil1++);
  print(++bil1);
  print(bil1--);
  print(--bil1);

  // 5. operator pembanding
  print(true && true);
  print(true && false);
  print(true || false);
  print(!true);
  print(!false);

  // 6. operator percabangan
  String name = "Amel";

  if (name == "amel") {
    print("pasti nama kamu amel");
  } else if (name == "Amel") {
    print("pasti nama kamu Amel");
  } else {
    print("pasti nama kamu bukan amel");
  }

  String nilai = "A";
  switch (nilai) {
    case "A":
      print("anda lulus dengan sangat baik");
      break;
    case "B":
    case "C":
      print("anda lulus");
      break;
    case "D":
      print("maaf, anda tidak lulus");
      break;
    default:
      print("mungkin anda salah jurusan");
  }

  // 7. perulangan
  for (int i = 0; i <= 100; i += 50) {
    print(i);
  }

  for (var name in names) {
    print(name);
  }

  int i = 0;
  while (i <= 50) {
    print(i);
    i += 25;
  }

  do {
    print(i);
    i++;
  } while (i <= 100);

  // 8. fungsi
  sayHello("amel");
}

// fungsi
void sayHello(String name) {
  print("Hello $name");
}
