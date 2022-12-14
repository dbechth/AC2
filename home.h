const char home_page[] PROGMEM = R"=====(
<!doctype html>
<html lang="en" class="no-js">
<head>
<style>
html,body,div,span,object,iframe,h1,h2,h3,h4,h5,h6,p,blockquote,pre,abbr,address,cite,code,del,dfn,em,img,ins,kbd,q,samp,small,strong,sub,sup,var,b,i,dl,dt,dd,ol,ul,li,fieldset,form,label,legend,table,caption,tbody,tfoot,thead,tr,th,td,article,aside,canvas,details,figcaption,figure,footer,header,hgroup,menu,nav,section,summary,time,mark,audio,video{margin:0;padding:0;border:0;outline:0;font-size:100%;vertical-align:baseline;background:transparent}
body{line-height:1; font-family: arial;}
h1{font-size: 25px;}h2{font-size: 21px;}h3{font-size: 18px;}h4{font-size: 16px;}
article,aside,details,figcaption,figure,footer,header,hgroup,menu,nav,section{display:block}
nav ul{list-style:none}
blockquote,q{quotes:none}
blockquote:before,blockquote:after,q:before,q:after{content:none}
a{margin:0;padding:0;font-size:100%;vertical-align:baseline;background:transparent}
ins{background-color:#ff9;color:#000;text-decoration:none}
mark{background-color:#ff9;color:#000;font-style:italic;font-weight:bold}
del{text-decoration:line-through}
abbr[title],dfn[title]{border-bottom:1px dotted;cursor:help}
table{border-collapse:collapse;border-spacing:0}
hr{display:block;height:1px;border:0;border-top:1px solid #ccc;margin:1em 0;padding:0}
input,select{vertical-align:middle}

body,html {
	background-color: #FFF;
}
header {
    background: #AEC6CF;
    padding: 20px 30px;
    max-width: 940px;
    margin: auto;
}
nav {
    display: inline-block;
}
nav ul li a {
    background: #EEE;
    padding: 2px 10px;
    font-size: 20px;
    text-decoration: none;
    font-weight: bold;
    color: #444;
    border-radius: 10px;
}
nav ul li a:hover {
	background: #FFF;
}
nav ul li {
    display: inline-block;
    margin: 10px;
}
nav ul {
    list-style: none;
}
#pageContent {
    max-width: 1000px;
    margin: auto;
    border: none;
}
main {
	float: left;
	width: 60%;
}
aside {
	float: right;
	width: 30%;
}
article {
    border-bottom: 2px dotted #999;
    padding-bottom: 20px;
    margin-bottom: 20px;
}
article h2 {
    font-weight: normal;
    margin-bottom: 12px;
}
article p {
	
}
main section {
	
}
footer {
	background: #AEC6CF;
	max-width: 1000px;
	margin: auto;
	clear: both;
	text-align: right;
}
footer p {
	padding: 20px;
}
address {
    padding: 10px 20px 30px 10px;
}
aside > div {
	margin: 10px auto;
	background: #AEC6CF;
	min-height: 100px;
}
#logo {
    display: inline-block;
    vertical-align: middle;
    font-size: 30px;
    margin-right: 75px;
    color: #FFF;
}
#logo img {
    width: 50px;
    vertical-align: middle;
    margin-right: 10px;
}
body > section {
    max-width: 1000px;
    margin: auto;
    padding: 30px 0px;
    border-bottom: 1px solid #999;
    color: #333;
}

@media screen and (max-width: 1000px) {
	body > section {
		padding: 30px 20px;
	}
}
@media screen and (max-width: 600px) {
	main {
		float: none;
		width: 100%;
	}
	aside {
		float: none;
		width: 100%;
	}

}

</style>
    <meta charset="utf-8">
    <meta http-equiv="x-ua-compatible" content="ie=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="canonical" href="https://html5-templates.com/" />
    <title>Responsive HTML5 Page Layout Template</title>
    <meta name="description" content="Simple HTML5 Page layout template with header, footer, sidebar etc.">
    <link rel="stylesheet" href="style.css">
    <script src="script.js"></script>
</head>

<body>
	<header>
		<nav>  
			<ul>
				<li><a href="/">Home</a>
				<li><a href="/aircom">AirCom</a>
				<li><a href="/thermostat">Thermostat</a>
				<li><a href="/terminal">Terminal</a>
			</ul>
		</nav>
	</header>
	<section>
		<strong>Demonstration of a simple page layout using HTML5 tags: header, nav, section, main, article, aside, footer, address.</strong>
	</section>
	<section id="pageContent">
		<main role="main">
			<article>
				<h2>Stet facilis ius te</h2>
				<p>Lorem ipsum dolor sit amet, nonumes voluptatum mel ea, cu case ceteros cum. Novum commodo malorum vix ut. Dolores consequuntur in ius, sale electram dissentiunt quo te. Cu duo omnes invidunt, eos eu mucius fabellas. Stet facilis ius te, quando voluptatibus eos in. Ad vix mundi alterum, integre urbanitas intellegam vix in.</p>
			</article>
			<article>
				<h2>Illud mollis moderatius</h2>
				<p>Eum facete intellegat ei, ut mazim melius usu. Has elit simul primis ne, regione minimum id cum. Sea deleniti dissentiet ea. Illud mollis moderatius ut per, at qui ubique populo. Eum ad cibo legimus, vim ei quidam fastidii.</p>
			</article>
			<article>
				<h2>Ex ignota epicurei quo</h2>
				<p>Quo debet vivendo ex. Qui ut admodum senserit partiendo. Id adipiscing disputando eam, sea id magna pertinax concludaturque. Ex ignota epicurei quo, his ex doctus delenit fabellas, erat timeam cotidieque sit in. Vel eu soleat voluptatibus, cum cu exerci mediocritatem. Malis legere at per, has brute putant animal et, in consul utamur usu.</p>
			</article>
			<article>
				<h2>His at autem inani volutpat</h2>
				<p>Te has amet modo perfecto, te eum mucius conclusionemque, mel te erat deterruisset. Duo ceteros phaedrum id, ornatus postulant in sea. His at autem inani volutpat. Tollit possit in pri, platonem persecuti ad vix, vel nisl albucius gloriatur no.</p>
			</article>
		</main>
		<aside>
			<div>Sidebar 1</div>
			<div>Sidebar 2</div>
			<div>Sidebar 3</div>
		</aside>
	</section>
	<footer>
	</footer>


</body>

</html>
)=====";