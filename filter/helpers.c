#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{

    for (int i  = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int rgbtGray = (round(image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed)/3.0);

            image[i][j].rgbtBlue = rgbtGray;
            image[i][j].rgbtGreen = rgbtGray;
            image[i][j].rgbtRed = rgbtGray;
        }
    }
    return;
}

//swap function




// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i  = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            /** Swap pixels from left to right */


        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
