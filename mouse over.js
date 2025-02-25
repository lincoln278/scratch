<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Change Color on Hover</title>
</head>
<body>

  <h1 id="heading">Hover over me!</h1>

  <script>
   
    const heading = document.getElementById('heading');

    heading.addEventListener('mouseover', function() {
      heading.style.color ='aqua'; 
    });

    heading.addEventListener('mouseout', function() {
      heading.style.color ='pink';
    });
  </script>

</body>
</html>
