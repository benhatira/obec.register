$(function(){  
  var data_index = {};
        //attach autocomplete  
        $("input#edit-school-name-th").autocomplete({  
            minLength: 3,
            //define callback to format results  
            source: function(req, add){  
                //pass request to server  
                $.getJSON("/json/school?callback=?", req, function(data) {  
                    //create array for response objects  
                    var suggestions = [];
                    //process response  
                    $.each(data, function(i, val){  
                      suggestions.push(val.name);  
                      data_index[val.name] = val.id;
                    });  
                    //pass array to callback  
                    add(suggestions);  
                });  
            },  
  
        //define select handler  
            select: function(e, ui) {  
                  console.log(data_index[ui.item.value]);
                  $.get("/json/school_detail?term="+data_index[ui.item.value], function(data) {
                    darr = data.split(",");
                    $("input#edit-school-address").val(darr[0]);
                    $("input#edit-school-zipcode").val(darr[1]);
                    $("input#edit-school-province").val(darr[2]);
                  });
            },  
  
            //define select handler  
            change: function() {  
            }  
      });  
});
