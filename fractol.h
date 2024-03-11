/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabashee <aabashee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:08:16 by aabashee          #+#    #+#             */
/*   Updated: 2024/03/11 20:10:20 by aabashee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

typedef struct s_data
{
	void	*mlx;
	void	*mlx_win;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		width;
	int		height;
	int		flag;
	int		base_color;
	int		iteration;
	int		max_iteration;
	int		stop;
	double	xtemp;
	double	cx;
	double	cy;
	double	offset;
	double	x_move;
	double	y_move;
	double	zoom;
	double	x_axis;
	double	y_axis;
}	t_data;
/* --- plot the Fractols --- */
void	show_mandelbrot(t_data *img);
void	show_julia(t_data *img);
void	show_tricorn(t_data *img);
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	arrow_move(t_data *img, int keycode);
void	init_fractol(t_data *img, int ac, char **av);

/* --- Zoom and Translation --- */
int		mouse(int mouse_key_code, int x, int y, t_data *img);
int		keypad(int keycode, t_data *img);
int		mouse_julia(int x, int y, t_data *img);
void	color_change(t_data *img, int color);
void	my_mlx_pixel_put(t_data *data, int x, int y, int colour);
/* ---libft and Modified atof for floats/double --- */
double	compute_x0(t_data *img, int w);
double	compute_y0(t_data *img, int h);
double	ft_atof(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_close(void);
int		error_check(const char *str1);
void	ft_putstr(char *str);
void	ft_error(void);

#endif
