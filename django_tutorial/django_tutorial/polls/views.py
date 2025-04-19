from django.shortcuts import render
from django.http import HttpResponse, Http404
from .models import Question
def return_question_text(question):
    return(question.question_text)
def index(request):
    q = Question.objects.order_by("pub_date")[:5]
    output=", ".join(map(return_question_text, q))
    context= {"q": q}
    return render(request,"polls/index.html", context)
def detail(request, question_id):
    try:
        question = Question.objects.get(pk=question_id)
        return(render(request, "polls/detail.html",{"question": question}))
    except Http404:
        return(render(request, "polls/404.html",{"question_id": question_id}))
def results(request, question_id):
    response = f"You're looking at question{str(question_id)}."
    return(HttpResponse(response.encode('utf-8')))
def vote(request, question_id):
         return HttpResponse(f"You're voting on question {question_id}.".encode('utf-8'))
