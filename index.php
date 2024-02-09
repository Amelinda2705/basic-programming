<?php 

  // 1. input dan output
  echo "siapa nama kamu? ";
  $name = trim(fgets(STDIN));
  echo "nama kamu adalah $name" . PHP_EOL;


  // 2. komentar
  /*
    komentar
  */

  // 3. variable dan tipe data
  var_dump(17); // int
  var_dump(14.7); // float
  var_dump(true); // boolean
  var_dump("rpl"); // string
  $names = ["amel", "imel", "umel", "emel", "omel"];
  var_dump($names); // array
  $amel = ["nama" => "amel", "kelas" => 11, "jurusan" => "rpl"];
  var_dump($amel); // map

  // 4. operasi aritmatika
  $bil1 = 17;
  $bil2 = 8;
  echo $bil1 + $bil2 . PHP_EOL;
  echo $bil1 - $bil2 . PHP_EOL;
  echo $bil1 * $bil2 . PHP_EOL;
  echo $bil1 ** $bil2 . PHP_EOL;
  echo $bil1 / $bil2 . PHP_EOL;
  echo $bil1++ . PHP_EOL;
  echo ++$bil1 . PHP_EOL;
  echo $bil1-- . PHP_EOL;
  echo --$bil1 . PHP_EOL;
  echo $bil1 % $bil2 . PHP_EOL;

  // 5. operator pembanding
  echo true && true . PHP_EOL;
  echo true and false . PHP_EOL;
  echo false || false . PHP_EOL;
  echo true or false . PHP_EOL;
  echo !true . PHP_EOL;
  echo true xor false . PHP_EOL;

  // 6. operator percabangan
  $name = "Amel";

  if ($name == "amel") {
    echo "pasti nama kamu amel" . PHP_EOL;
  } else if ($name == "Amel") {
    echo "pasti nama kamu Amel" . PHP_EOL;
  } else {
    echo "pasti nama kamu bukan amel" . PHP_EOL;
  }

  $nilai = "A";
  switch ($nilai) {
    case "A":
      echo "anda lulus de ngan sangat baik" . PHP_EOL;
      break;
    case "B":
    case "C":
      echo "anda lulus" . PHP_EOL;
      break;
    case "D":
      echo "maaf, anda tidak lulus" . PHP_EOL;
      break;
    default:
      echo "mungkin anda salah jurusan" . PHP_EOL;
  }

  // 7. perulangan
  for ($i = 0; $i <= 100; $i += 50) {
    echo $i . PHP_EOL;
  }

  foreach ($names as $name) {
    echo $name . PHP_EOL;
  }

  $i = 0;
  while ($i <= 50) {
    echo $i . PHP_EOL;
    $i += 25;
  }

  do {
    echo $i . PHP_EOL;
    $i++;
  } while ($i <= 100);

  // 8. fungsi
  function sayHello($name) {
    echo "Hello $name" . PHP_EOL;
  }
  sayHello("amel");
  

?>