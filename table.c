<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=<device-width>, initial-scale=1.0">
    <title>table1</title>
    <style>
        table, th, td {
          border: 1px solid black;
          border-collapse: collapse;
        }
        tr,th, td {
  padding: 5px;
  text-align: center;
}
     tr:nth-child(even)
     {
         background-color: #dddddd;
     }
     th, td {
  padding: 15px;
  border-style: dotted;
}
  #t01
  {
      color: #FC3004;
  }
  #t02
  {
      color: #041EFC;

  }
  #t03
  {
      color: #D604FC;

  }
  #t04
  {
      color: #000000;

  }
  #t05
  {
      color: #000000;

  }
  #t06
  {
      color: #000000;

  }
  #t07
  {
      color: #000000;

  }

        </style>
</head>
<body>

    <table>
        <tr id="t01">

            <td colspan="4"><b>STUDENT INFORMATION</b></td>
        </tr>
        <tr id="t02">
           <td colspan="2"><b>Name AND <u><i>Roll No.</i></u> </b></td>
           <td colspan="2"><i>Contact No. AND <u>E-mail ID</u></i></td>
        </tr>
        <tr id="t03">
          <td>Name</td>
          <td><u>Roll No.</u></td>
          <td><i>Contact No.</i></td>
          <td><u><i>E-mail ID</i></u></td>
        </tr>
         <tr id="t04">
             <td>A</td>
             <td>10</td>
             <td>1234567890</td>
             <td><u>abc@gmail.com</u></td>
         </tr>
         <tr id="t05">
            <td>B</td>
            <td>20</td>
            <td>1234567890</td>
            <td>xyz@gmail.com</td>
        </tr>
        <tr id="t06" >
            <td>C</td>
            <td>30</td>
            <td>1234567890</td>
            <td><u>abcd@gmail.com</u></td>
        </tr>
        <tr id="t07">
            <td>D</td>
            <td>40</td>
            <td>1234567890</td>
            <td><u>jkl@gmail.com</u></td>
        </tr>

    </table>
</body>
</html>
