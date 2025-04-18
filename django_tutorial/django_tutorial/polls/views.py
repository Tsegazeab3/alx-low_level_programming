from django.http import HttpResponse, response 
def index(request):
    return HttpResponse("welcome to polls app".encode('utf-8'))
def detail(request, question_id):
    return HttpResponse(f"You're looking at question {str(question_id)}".encode('utf-8'))
def results(request, question_id):
    response = f"You're looking at question{str(question_id)}."
    return(HttpResponse(response.encode('utf-8')))
def vote(request, question_id):
         return HttpResponse(f"You're voting on question {question_id}.".encode('utf-8'))


