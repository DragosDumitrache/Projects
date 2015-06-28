#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned int width, height;
  float cost, tile_size;

  printf("Please input the floor width: ");
  scanf("%d", &width);
  printf("Please input the floor height: ");
  scanf("%d", &height);
  printf("Please input the tile width and height: ");
  scanf("%f", &tile_size);
  printf("Please input a single tile's cost: ");
  scanf("%f", &cost);

  unsigned int floor_area = width * height;
  float tile_area = tile_size * tile_size;

  float total_cost = cost * (float)(floor_area / tile_area);

  printf(
      "The cost to cover %d square units of floor area using a tile with area %.2f is: %.2f\n",
      floor_area,
      tile_area,
      total_cost);
  return 0;
}
