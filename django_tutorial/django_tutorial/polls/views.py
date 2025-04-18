from django.http import HttpResponse 
def detail(request, question_id):
    return HttpResponse(f"You're looking at question {str(question_id)}")

