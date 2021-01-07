/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995-2003 Spencer Kimball and Peter Mattis
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

/* NOTE: This file is auto-generated by pdbgen.pl. */

#include "config.h"

#include <glib-object.h>

#include "libgimpbase/gimpbaseenums.h"
#include "libgimpcolor/gimpcolor.h"

#include "pdb-types.h"

#include "core/gimpgrid.h"
#include "core/gimpimage-grid.h"
#include "core/gimpimage.h"
#include "core/gimpparamspecs.h"

#include "gimppdb.h"
#include "gimpprocedure.h"
#include "internal-procs.h"


static GValueArray *
image_grid_get_spacing_invoker (GimpProcedure      *procedure,
                                Gimp               *gimp,
                                GimpContext        *context,
                                GimpProgress       *progress,
                                const GValueArray  *args,
                                GError            **error)
{
  gboolean success = TRUE;
  GValueArray *return_vals;
  GimpImage *image;
  gdouble xspacing = 0.0;
  gdouble yspacing = 0.0;

  image = gimp_value_get_image (&args->values[0], gimp);

  if (success)
    {
      GimpGrid *grid = gimp_image_get_grid (image);

      if (grid)
        g_object_get (grid,
                      "xspacing", &xspacing,
                      "yspacing", &yspacing,
                      NULL);
      else
        success = FALSE;
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    {
      g_value_set_double (&return_vals->values[1], xspacing);
      g_value_set_double (&return_vals->values[2], yspacing);
    }

  return return_vals;
}

static GValueArray *
image_grid_set_spacing_invoker (GimpProcedure      *procedure,
                                Gimp               *gimp,
                                GimpContext        *context,
                                GimpProgress       *progress,
                                const GValueArray  *args,
                                GError            **error)
{
  gboolean success = TRUE;
  GimpImage *image;
  gdouble xspacing;
  gdouble yspacing;

  image = gimp_value_get_image (&args->values[0], gimp);
  xspacing = g_value_get_double (&args->values[1]);
  yspacing = g_value_get_double (&args->values[2]);

  if (success)
    {
      GimpGrid *grid = gimp_image_get_grid (image);

      if (grid)
        g_object_set (grid,
                      "xspacing", xspacing,
                      "yspacing", yspacing,
                      NULL);
      else
        success = FALSE;
    }

  return gimp_procedure_get_return_values (procedure, success,
                                           error ? *error : NULL);
}

static GValueArray *
image_grid_get_offset_invoker (GimpProcedure      *procedure,
                               Gimp               *gimp,
                               GimpContext        *context,
                               GimpProgress       *progress,
                               const GValueArray  *args,
                               GError            **error)
{
  gboolean success = TRUE;
  GValueArray *return_vals;
  GimpImage *image;
  gdouble xoffset = 0.0;
  gdouble yoffset = 0.0;

  image = gimp_value_get_image (&args->values[0], gimp);

  if (success)
    {
      GimpGrid *grid = gimp_image_get_grid (image);

      if (grid)
        g_object_get (grid,
                      "xoffset", &xoffset,
                      "yoffset", &yoffset,
                      NULL);
      else
        success = FALSE;
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    {
      g_value_set_double (&return_vals->values[1], xoffset);
      g_value_set_double (&return_vals->values[2], yoffset);
    }

  return return_vals;
}

static GValueArray *
image_grid_set_offset_invoker (GimpProcedure      *procedure,
                               Gimp               *gimp,
                               GimpContext        *context,
                               GimpProgress       *progress,
                               const GValueArray  *args,
                               GError            **error)
{
  gboolean success = TRUE;
  GimpImage *image;
  gdouble xoffset;
  gdouble yoffset;

  image = gimp_value_get_image (&args->values[0], gimp);
  xoffset = g_value_get_double (&args->values[1]);
  yoffset = g_value_get_double (&args->values[2]);

  if (success)
    {
      GimpGrid *grid = gimp_image_get_grid (image);

      if (grid)
        g_object_set (grid,
                      "xoffset", xoffset,
                      "yoffset", yoffset,
                      NULL);
      else
        success = FALSE;
    }

  return gimp_procedure_get_return_values (procedure, success,
                                           error ? *error : NULL);
}

static GValueArray *
image_grid_get_foreground_color_invoker (GimpProcedure      *procedure,
                                         Gimp               *gimp,
                                         GimpContext        *context,
                                         GimpProgress       *progress,
                                         const GValueArray  *args,
                                         GError            **error)
{
  gboolean success = TRUE;
  GValueArray *return_vals;
  GimpImage *image;
  GimpRGB fgcolor = { 0.0, 0.0, 0.0, 1.0 };

  image = gimp_value_get_image (&args->values[0], gimp);

  if (success)
    {
      GimpGrid *grid = gimp_image_get_grid (image);

      if (grid)
        fgcolor = grid->fgcolor;
      else
        success = FALSE;
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    gimp_value_set_rgb (&return_vals->values[1], &fgcolor);

  return return_vals;
}

static GValueArray *
image_grid_set_foreground_color_invoker (GimpProcedure      *procedure,
                                         Gimp               *gimp,
                                         GimpContext        *context,
                                         GimpProgress       *progress,
                                         const GValueArray  *args,
                                         GError            **error)
{
  gboolean success = TRUE;
  GimpImage *image;
  GimpRGB fgcolor;

  image = gimp_value_get_image (&args->values[0], gimp);
  gimp_value_get_rgb (&args->values[1], &fgcolor);

  if (success)
    {
      GimpGrid *grid = gimp_image_get_grid (image);

      if (grid)
        g_object_set (grid, "fgcolor", &fgcolor, NULL);
      else
        success = FALSE;
    }

  return gimp_procedure_get_return_values (procedure, success,
                                           error ? *error : NULL);
}

static GValueArray *
image_grid_get_background_color_invoker (GimpProcedure      *procedure,
                                         Gimp               *gimp,
                                         GimpContext        *context,
                                         GimpProgress       *progress,
                                         const GValueArray  *args,
                                         GError            **error)
{
  gboolean success = TRUE;
  GValueArray *return_vals;
  GimpImage *image;
  GimpRGB bgcolor = { 0.0, 0.0, 0.0, 1.0 };

  image = gimp_value_get_image (&args->values[0], gimp);

  if (success)
    {
      GimpGrid *grid = gimp_image_get_grid (image);

      if (grid)
        bgcolor = grid->bgcolor;
      else
        success = FALSE;
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    gimp_value_set_rgb (&return_vals->values[1], &bgcolor);

  return return_vals;
}

static GValueArray *
image_grid_set_background_color_invoker (GimpProcedure      *procedure,
                                         Gimp               *gimp,
                                         GimpContext        *context,
                                         GimpProgress       *progress,
                                         const GValueArray  *args,
                                         GError            **error)
{
  gboolean success = TRUE;
  GimpImage *image;
  GimpRGB bgcolor;

  image = gimp_value_get_image (&args->values[0], gimp);
  gimp_value_get_rgb (&args->values[1], &bgcolor);

  if (success)
    {
      GimpGrid *grid = gimp_image_get_grid (image);

      if (grid)
        g_object_set (grid, "bgcolor", &bgcolor, NULL);
      else
        success = FALSE;
    }

  return gimp_procedure_get_return_values (procedure, success,
                                           error ? *error : NULL);
}

static GValueArray *
image_grid_get_style_invoker (GimpProcedure      *procedure,
                              Gimp               *gimp,
                              GimpContext        *context,
                              GimpProgress       *progress,
                              const GValueArray  *args,
                              GError            **error)
{
  gboolean success = TRUE;
  GValueArray *return_vals;
  GimpImage *image;
  gint32 style = 0;

  image = gimp_value_get_image (&args->values[0], gimp);

  if (success)
    {
      GimpGrid *grid = gimp_image_get_grid (image);

      if (grid)
        g_object_get (grid, "style", &style, NULL);
      else
        success = FALSE;
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    g_value_set_enum (&return_vals->values[1], style);

  return return_vals;
}

static GValueArray *
image_grid_set_style_invoker (GimpProcedure      *procedure,
                              Gimp               *gimp,
                              GimpContext        *context,
                              GimpProgress       *progress,
                              const GValueArray  *args,
                              GError            **error)
{
  gboolean success = TRUE;
  GimpImage *image;
  gint32 style;

  image = gimp_value_get_image (&args->values[0], gimp);
  style = g_value_get_enum (&args->values[1]);

  if (success)
    {
      GimpGrid *grid = gimp_image_get_grid (image);

      if (grid)
        g_object_set (grid, "style", style, NULL);
      else
        success = FALSE;
    }

  return gimp_procedure_get_return_values (procedure, success,
                                           error ? *error : NULL);
}

void
register_grid_procs (GimpPDB *pdb)
{
  GimpProcedure *procedure;

  /*
   * gimp-image-grid-get-spacing
   */
  procedure = gimp_procedure_new (image_grid_get_spacing_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-image-grid-get-spacing");
  gimp_procedure_set_static_strings (procedure,
                                     "gimp-image-grid-get-spacing",
                                     "Gets the spacing of an image's grid.",
                                     "This procedure retrieves the horizontal and vertical spacing of an image's grid. It takes the image as parameter.",
                                     "Sylvain Foret",
                                     "Sylvain Foret",
                                     "2005",
                                     NULL);
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_image_id ("image",
                                                         "image",
                                                         "The image",
                                                         pdb->gimp, FALSE,
                                                         GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   g_param_spec_double ("xspacing",
                                                        "xspacing",
                                                        "The image's grid horizontal spacing",
                                                        -G_MAXDOUBLE, G_MAXDOUBLE, 0,
                                                        GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   g_param_spec_double ("yspacing",
                                                        "yspacing",
                                                        "The image's grid vertical spacing",
                                                        -G_MAXDOUBLE, G_MAXDOUBLE, 0,
                                                        GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-image-grid-set-spacing
   */
  procedure = gimp_procedure_new (image_grid_set_spacing_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-image-grid-set-spacing");
  gimp_procedure_set_static_strings (procedure,
                                     "gimp-image-grid-set-spacing",
                                     "Sets the spacing of an image's grid.",
                                     "This procedure sets the horizontal and vertical spacing of an image's grid.",
                                     "Sylvain Foret",
                                     "Sylvain Foret",
                                     "2005",
                                     NULL);
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_image_id ("image",
                                                         "image",
                                                         "The image",
                                                         pdb->gimp, FALSE,
                                                         GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               g_param_spec_double ("xspacing",
                                                    "xspacing",
                                                    "The image's grid horizontal spacing",
                                                    -G_MAXDOUBLE, G_MAXDOUBLE, 0,
                                                    GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               g_param_spec_double ("yspacing",
                                                    "yspacing",
                                                    "The image's grid vertical spacing",
                                                    -G_MAXDOUBLE, G_MAXDOUBLE, 0,
                                                    GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-image-grid-get-offset
   */
  procedure = gimp_procedure_new (image_grid_get_offset_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-image-grid-get-offset");
  gimp_procedure_set_static_strings (procedure,
                                     "gimp-image-grid-get-offset",
                                     "Gets the offset of an image's grid.",
                                     "This procedure retrieves the horizontal and vertical offset of an image's grid. It takes the image as parameter.",
                                     "Sylvain Foret",
                                     "Sylvain Foret",
                                     "2005",
                                     NULL);
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_image_id ("image",
                                                         "image",
                                                         "The image",
                                                         pdb->gimp, FALSE,
                                                         GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   g_param_spec_double ("xoffset",
                                                        "xoffset",
                                                        "The image's grid horizontal offset",
                                                        -G_MAXDOUBLE, G_MAXDOUBLE, 0,
                                                        GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   g_param_spec_double ("yoffset",
                                                        "yoffset",
                                                        "The image's grid vertical offset",
                                                        -G_MAXDOUBLE, G_MAXDOUBLE, 0,
                                                        GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-image-grid-set-offset
   */
  procedure = gimp_procedure_new (image_grid_set_offset_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-image-grid-set-offset");
  gimp_procedure_set_static_strings (procedure,
                                     "gimp-image-grid-set-offset",
                                     "Sets the offset of an image's grid.",
                                     "This procedure sets the horizontal and vertical offset of an image's grid.",
                                     "Sylvain Foret",
                                     "Sylvain Foret",
                                     "2005",
                                     NULL);
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_image_id ("image",
                                                         "image",
                                                         "The image",
                                                         pdb->gimp, FALSE,
                                                         GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               g_param_spec_double ("xoffset",
                                                    "xoffset",
                                                    "The image's grid horizontal offset",
                                                    -G_MAXDOUBLE, G_MAXDOUBLE, 0,
                                                    GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               g_param_spec_double ("yoffset",
                                                    "yoffset",
                                                    "The image's grid vertical offset",
                                                    -G_MAXDOUBLE, G_MAXDOUBLE, 0,
                                                    GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-image-grid-get-foreground-color
   */
  procedure = gimp_procedure_new (image_grid_get_foreground_color_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-image-grid-get-foreground-color");
  gimp_procedure_set_static_strings (procedure,
                                     "gimp-image-grid-get-foreground-color",
                                     "Sets the foreground color of an image's grid.",
                                     "This procedure gets the foreground color of an image's grid.",
                                     "Sylvain Foret",
                                     "Sylvain Foret",
                                     "2005",
                                     NULL);
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_image_id ("image",
                                                         "image",
                                                         "The image",
                                                         pdb->gimp, FALSE,
                                                         GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   gimp_param_spec_rgb ("fgcolor",
                                                        "fgcolor",
                                                        "The image's grid foreground color",
                                                        TRUE,
                                                        NULL,
                                                        GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-image-grid-set-foreground-color
   */
  procedure = gimp_procedure_new (image_grid_set_foreground_color_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-image-grid-set-foreground-color");
  gimp_procedure_set_static_strings (procedure,
                                     "gimp-image-grid-set-foreground-color",
                                     "Gets the foreground color of an image's grid.",
                                     "This procedure sets the foreground color of an image's grid.",
                                     "Sylvain Foret",
                                     "Sylvain Foret",
                                     "2005",
                                     NULL);
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_image_id ("image",
                                                         "image",
                                                         "The image",
                                                         pdb->gimp, FALSE,
                                                         GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_rgb ("fgcolor",
                                                    "fgcolor",
                                                    "The new foreground color",
                                                    TRUE,
                                                    NULL,
                                                    GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-image-grid-get-background-color
   */
  procedure = gimp_procedure_new (image_grid_get_background_color_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-image-grid-get-background-color");
  gimp_procedure_set_static_strings (procedure,
                                     "gimp-image-grid-get-background-color",
                                     "Sets the background color of an image's grid.",
                                     "This procedure gets the background color of an image's grid.",
                                     "Sylvain Foret",
                                     "Sylvain Foret",
                                     "2005",
                                     NULL);
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_image_id ("image",
                                                         "image",
                                                         "The image",
                                                         pdb->gimp, FALSE,
                                                         GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   gimp_param_spec_rgb ("bgcolor",
                                                        "bgcolor",
                                                        "The image's grid background color",
                                                        TRUE,
                                                        NULL,
                                                        GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-image-grid-set-background-color
   */
  procedure = gimp_procedure_new (image_grid_set_background_color_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-image-grid-set-background-color");
  gimp_procedure_set_static_strings (procedure,
                                     "gimp-image-grid-set-background-color",
                                     "Gets the background color of an image's grid.",
                                     "This procedure sets the background color of an image's grid.",
                                     "Sylvain Foret",
                                     "Sylvain Foret",
                                     "2005",
                                     NULL);
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_image_id ("image",
                                                         "image",
                                                         "The image",
                                                         pdb->gimp, FALSE,
                                                         GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_rgb ("bgcolor",
                                                    "bgcolor",
                                                    "The new background color",
                                                    TRUE,
                                                    NULL,
                                                    GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-image-grid-get-style
   */
  procedure = gimp_procedure_new (image_grid_get_style_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-image-grid-get-style");
  gimp_procedure_set_static_strings (procedure,
                                     "gimp-image-grid-get-style",
                                     "Gets the style of an image's grid.",
                                     "This procedure retrieves the style of an image's grid.",
                                     "Sylvain Foret",
                                     "Sylvain Foret",
                                     "2005",
                                     NULL);
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_image_id ("image",
                                                         "image",
                                                         "The image",
                                                         pdb->gimp, FALSE,
                                                         GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   g_param_spec_enum ("style",
                                                      "style",
                                                      "The image's grid style",
                                                      GIMP_TYPE_GRID_STYLE,
                                                      GIMP_GRID_DOTS,
                                                      GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-image-grid-set-style
   */
  procedure = gimp_procedure_new (image_grid_set_style_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-image-grid-set-style");
  gimp_procedure_set_static_strings (procedure,
                                     "gimp-image-grid-set-style",
                                     "Sets the style unit of an image's grid.",
                                     "This procedure sets the style of an image's grid. It takes the image and the new style as parameters.",
                                     "Sylvain Foret",
                                     "Sylvain Foret",
                                     "2005",
                                     NULL);
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_image_id ("image",
                                                         "image",
                                                         "The image",
                                                         pdb->gimp, FALSE,
                                                         GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               g_param_spec_enum ("style",
                                                  "style",
                                                  "The image's grid style",
                                                  GIMP_TYPE_GRID_STYLE,
                                                  GIMP_GRID_DOTS,
                                                  GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);
}
