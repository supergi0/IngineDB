#pragma once

#include "./basic.hpp"

typedef struct Response{
    int type; // 0 -> successful | >0 -> error 
    std::string message; // Specific message to be sent
} Response;

Response successMessage(const std::string &message){
    return Response({0, message});
}