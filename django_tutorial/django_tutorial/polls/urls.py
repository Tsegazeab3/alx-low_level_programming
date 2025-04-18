from django.urls import path
from . import views

urlpatterns= [
    path('polls', views.index, name = "index"),
    path("/polls/question_number/<int:question_id>/", views.detail,name="detail"),
    path("/polls/question_number/<int:question_id>/results", views.results, name= "results"),
    path("</polls/question_number/<int:question_id>/vote", views.vote, name="votes"), 


]
