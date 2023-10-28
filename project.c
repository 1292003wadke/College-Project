<!DOCTYPE html>
<html>
<head>
  <meta charset="UTF-8">
  <title>Theatre Management</title>
  <link rel="stylesheet" href="project 3.css">
</head>
<body>
  <header>
    <h1>Theatre Management</h1>
    <nav>
      <ul>
        <li><a href="#productions">Productions</a></li>
        <li><a href="#schedule">Schedule</a></li>
        <li><a href="#contacts">Contacts</a></li>
      </ul>
    </nav>
  </header>
  <main>
    <section id="productions">
      <h2>Productions</h2>
      <ul>
        <li><a href="#">Production 1</a></li>
        <li><a href="#">Production 2</a></li>
        <li><a href="#">Production 3</a></li>
      </ul>
    </section>
    <section id="schedule">
      <h2>Schedule</h2>
      <table>
        <thead>
          <tr>
            <th>Time</th>
            <th>Event</th>
            <th>Location</th>
          </tr>
        </thead>
        <tbody>
          <tr>
            <td>8:00 AM</td>
            <td>Rehearsal</td>
            <td>Main Stage</td>
          </tr>
          <tr>
            <td>2:00 PM</td>
            <td>Performance</td>
            <td>Main Stage</td>
          </tr>
          <tr>
            <td>7:00 PM</td>
            <td>Performance</td>
            <td>Main Stage</td>
          </tr>
        </tbody>
      </table>
    </section>
    <section id="contacts">
      <h2>Contacts</h2>
      <ul>
        <li><a href="#">Director</a></li>
        <li><a href="#">Producer</a></li>
        <li><a href="#">Stage Manager</a></li>
      </ul>
    </section>
  </main>
  <footer>
    <p>&copy; 2023 Theatre Management</p>
  </footer>
</body>
</html>
CSS (style.css):

css
Copy code
body {
  font-family: Arial, sans-serif;
  margin: 0;
  padding: 0;
}

header {
  background-color: #333;
  color: #fff;
  padding: 10px;
  display: flex;
  justify-content: space-between;
  align-items: center;
}

nav ul {
  list-style: none;
  display: flex;
}

nav li {
  margin-left: 20px;
}

nav a {
  color: #fff;
  text-decoration: none;
}

main {
  padding: 20px;
}

section {
  margin-bottom: 40px;
}

table {
  border-collapse: collapse;
  width: 100%;
}

table th,
table td {
  padding: 10px;
  text-align: left;
  border: 1px solid #ccc;
}

table th {
  background-color: #f2f2f2;
}

footer {
  background-color: #ccc;
  padding: 10px;
  text-align: center;
}