/* AppWindow.c generated by valac 0.18.1, the Vala compiler
 * generated from AppWindow.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <pango/pango.h>
#include <cairo.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define DRAW_TYPE_APP_WINDOW (draw_app_window_get_type ())
#define DRAW_APP_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DRAW_TYPE_APP_WINDOW, DrawAppWindow))
#define DRAW_APP_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DRAW_TYPE_APP_WINDOW, DrawAppWindowClass))
#define DRAW_IS_APP_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DRAW_TYPE_APP_WINDOW))
#define DRAW_IS_APP_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DRAW_TYPE_APP_WINDOW))
#define DRAW_APP_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DRAW_TYPE_APP_WINDOW, DrawAppWindowClass))

typedef struct _DrawAppWindow DrawAppWindow;
typedef struct _DrawAppWindowClass DrawAppWindowClass;
typedef struct _DrawAppWindowPrivate DrawAppWindowPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define __vala_PangoFontDescription_free0(var) ((var == NULL) ? NULL : (var = (_vala_PangoFontDescription_free (var), NULL)))
#define _cairo_pattern_destroy0(var) ((var == NULL) ? NULL : (var = (cairo_pattern_destroy (var), NULL)))

struct _DrawAppWindow {
	GtkWindow parent_instance;
	DrawAppWindowPrivate * priv;
};

struct _DrawAppWindowClass {
	GtkWindowClass parent_class;
};

struct _DrawAppWindowPrivate {
	GtkBox* container;
	GtkToolbar* toolbar;
	GtkToolItem* label;
	GtkLabel* _title;
	gboolean _maximized;
};


static gpointer draw_app_window_parent_class = NULL;

GType draw_app_window_get_type (void) G_GNUC_CONST;
#define DRAW_APP_WINDOW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), DRAW_TYPE_APP_WINDOW, DrawAppWindowPrivate))
enum  {
	DRAW_APP_WINDOW_DUMMY_PROPERTY,
	DRAW_APP_WINDOW_TITLE,
	DRAW_APP_WINDOW_MAXIMIZED
};
#define DRAW_APP_WINDOW_HEIGHT 48
#define DRAW_APP_WINDOW_ICON_SIZE ((gint) GTK_ICON_SIZE_LARGE_TOOLBAR)
DrawAppWindow* draw_app_window_new (void);
DrawAppWindow* draw_app_window_construct (GType object_type);
static gboolean __lambda2_ (DrawAppWindow* self);
static gboolean ___lambda2__gtk_widget_delete_event (GtkWidget* _sender, GdkEventAny* event, gpointer self);
static void __lambda3_ (DrawAppWindow* self);
static void ___lambda3__gtk_tool_button_clicked (GtkToolButton* _sender, gpointer self);
static void __lambda4_ (DrawAppWindow* self);
gboolean draw_app_window_get_maximized (DrawAppWindow* self);
static void draw_app_window_set_maximized (DrawAppWindow* self, gboolean value);
static void ___lambda4__gtk_tool_button_clicked (GtkToolButton* _sender, gpointer self);
static void _vala_PangoFontDescription_free (PangoFontDescription* self);
GtkToolItem* draw_app_window_create_separator (DrawAppWindow* self);
static gboolean __lambda5_ (DrawAppWindow* self, cairo_t* cr);
static gboolean ___lambda5__gtk_widget_draw (GtkWidget* _sender, cairo_t* cr, gpointer self);
static void draw_app_window_real_add (GtkContainer* base, GtkWidget* widget);
static void draw_app_window_real_remove (GtkContainer* base, GtkWidget* widget);
static void draw_app_window_real_show (GtkWidget* base);
void draw_app_window_append_toolitem (DrawAppWindow* self, GtkToolItem* item, gboolean after_title);
const gchar* draw_app_window_get_title (DrawAppWindow* self);
void draw_app_window_set_title (DrawAppWindow* self, const gchar* value);
static void draw_app_window_finalize (GObject* obj);
static void _vala_draw_app_window_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_draw_app_window_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static gboolean __lambda2_ (DrawAppWindow* self) {
	gboolean result = FALSE;
	gtk_main_quit ();
	result = FALSE;
	return result;
}


static gboolean ___lambda2__gtk_widget_delete_event (GtkWidget* _sender, GdkEventAny* event, gpointer self) {
	gboolean result;
	result = __lambda2_ (self);
	return result;
}


static void __lambda3_ (DrawAppWindow* self) {
	gtk_widget_destroy ((GtkWidget*) self);
}


static void ___lambda3__gtk_tool_button_clicked (GtkToolButton* _sender, gpointer self) {
	__lambda3_ (self);
}


static void __lambda4_ (DrawAppWindow* self) {
	gboolean _tmp0_;
	_tmp0_ = self->priv->_maximized;
	if (!_tmp0_) {
		GdkWindow* _tmp1_ = NULL;
		_tmp1_ = gtk_widget_get_window ((GtkWidget*) self);
		gdk_window_maximize (_tmp1_);
		draw_app_window_set_maximized (self, TRUE);
	} else {
		GdkWindow* _tmp2_ = NULL;
		_tmp2_ = gtk_widget_get_window ((GtkWidget*) self);
		gdk_window_unmaximize (_tmp2_);
		draw_app_window_set_maximized (self, FALSE);
	}
}


static void ___lambda4__gtk_tool_button_clicked (GtkToolButton* _sender, gpointer self) {
	__lambda4_ (self);
}


static void _vala_PangoFontDescription_free (PangoFontDescription* self) {
	g_boxed_free (pango_font_description_get_type (), self);
}


DrawAppWindow* draw_app_window_construct (GType object_type) {
	DrawAppWindow * self = NULL;
	GtkToolbar* _tmp0_;
	GtkToolbar* _tmp1_;
	GtkBox* _tmp2_;
	GtkBox* _tmp3_;
	GtkToolbar* _tmp4_;
	GtkBox* _tmp5_;
	GtkBox* _tmp6_;
	GtkImage* _tmp7_;
	GtkImage* _tmp8_;
	GtkToolButton* _tmp9_;
	GtkToolButton* _tmp10_;
	GtkToolButton* close;
	GtkImage* _tmp11_;
	GtkImage* _tmp12_;
	GtkToolButton* _tmp13_;
	GtkToolButton* _tmp14_;
	GtkToolButton* maximize;
	GtkLabel* _tmp15_;
	GtkLabel* _tmp16_;
	PangoFontDescription* _tmp17_ = NULL;
	PangoFontDescription* _tmp18_;
	GtkToolItem* _tmp19_;
	GtkToolItem* _tmp20_;
	GtkLabel* _tmp21_;
	GtkToolItem* _tmp22_;
	GtkToolItem* _tmp23_;
	GtkStyleContext* _tmp24_ = NULL;
	GtkToolbar* _tmp25_;
	GtkToolbar* _tmp26_;
	GtkToolItem* _tmp27_ = NULL;
	GtkToolItem* _tmp28_;
	GtkToolbar* _tmp29_;
	GtkToolItem* _tmp30_;
	GtkToolbar* _tmp31_;
	GtkToolItem* _tmp32_ = NULL;
	GtkToolItem* _tmp33_;
	GtkToolbar* _tmp34_;
	GtkBox* _tmp35_;
	self = (DrawAppWindow*) g_object_new (object_type, NULL);
	g_signal_connect_object ((GtkWidget*) self, "delete-event", (GCallback) ___lambda2__gtk_widget_delete_event, self, 0);
	_tmp0_ = (GtkToolbar*) gtk_toolbar_new ();
	g_object_ref_sink (_tmp0_);
	_g_object_unref0 (self->priv->toolbar);
	self->priv->toolbar = _tmp0_;
	_tmp1_ = self->priv->toolbar;
	gtk_toolbar_set_icon_size (_tmp1_, DRAW_APP_WINDOW_ICON_SIZE);
	_tmp2_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
	g_object_ref_sink (_tmp2_);
	_g_object_unref0 (self->priv->container);
	self->priv->container = _tmp2_;
	_tmp3_ = self->priv->container;
	_tmp4_ = self->priv->toolbar;
	gtk_box_pack_start (_tmp3_, (GtkWidget*) _tmp4_, FALSE, TRUE, (guint) 0);
	_tmp5_ = self->priv->container;
	gtk_widget_set_vexpand ((GtkWidget*) _tmp5_, TRUE);
	_tmp6_ = self->priv->container;
	gtk_widget_set_hexpand ((GtkWidget*) _tmp6_, TRUE);
	_tmp7_ = (GtkImage*) gtk_image_new_from_file ("/usr/share/themes/elementary/metacity-1/close.svg");
	g_object_ref_sink (_tmp7_);
	_tmp8_ = _tmp7_;
	_tmp9_ = (GtkToolButton*) gtk_tool_button_new ((GtkWidget*) _tmp8_, "Close");
	g_object_ref_sink (_tmp9_);
	_tmp10_ = _tmp9_;
	_g_object_unref0 (_tmp8_);
	close = _tmp10_;
	g_object_set ((GtkWidget*) close, "height-request", DRAW_APP_WINDOW_HEIGHT, NULL);
	g_object_set ((GtkWidget*) close, "width-request", DRAW_APP_WINDOW_HEIGHT, NULL);
	g_signal_connect_object (close, "clicked", (GCallback) ___lambda3__gtk_tool_button_clicked, self, 0);
	_tmp11_ = (GtkImage*) gtk_image_new_from_file ("/usr/share/themes/elementary/metacity-1/maximize.svg");
	g_object_ref_sink (_tmp11_);
	_tmp12_ = _tmp11_;
	_tmp13_ = (GtkToolButton*) gtk_tool_button_new ((GtkWidget*) _tmp12_, "Close");
	g_object_ref_sink (_tmp13_);
	_tmp14_ = _tmp13_;
	_g_object_unref0 (_tmp12_);
	maximize = _tmp14_;
	g_object_set ((GtkWidget*) maximize, "height-request", DRAW_APP_WINDOW_HEIGHT, NULL);
	g_object_set ((GtkWidget*) maximize, "width-request", DRAW_APP_WINDOW_HEIGHT, NULL);
	g_signal_connect_object (maximize, "clicked", (GCallback) ___lambda4__gtk_tool_button_clicked, self, 0);
	_tmp15_ = (GtkLabel*) gtk_label_new ("");
	g_object_ref_sink (_tmp15_);
	_g_object_unref0 (self->priv->_title);
	self->priv->_title = _tmp15_;
	_tmp16_ = self->priv->_title;
	_tmp17_ = pango_font_description_from_string ("bold");
	_tmp18_ = _tmp17_;
	gtk_widget_override_font ((GtkWidget*) _tmp16_, _tmp18_);
	__vala_PangoFontDescription_free0 (_tmp18_);
	_tmp19_ = gtk_tool_item_new ();
	g_object_ref_sink (_tmp19_);
	_g_object_unref0 (self->priv->label);
	self->priv->label = _tmp19_;
	_tmp20_ = self->priv->label;
	_tmp21_ = self->priv->_title;
	gtk_container_add ((GtkContainer*) _tmp20_, (GtkWidget*) _tmp21_);
	_tmp22_ = self->priv->label;
	gtk_tool_item_set_expand (_tmp22_, TRUE);
	_tmp23_ = self->priv->label;
	_tmp24_ = gtk_widget_get_style_context ((GtkWidget*) _tmp23_);
	gtk_style_context_add_class (_tmp24_, "title");
	_tmp25_ = self->priv->toolbar;
	gtk_toolbar_insert (_tmp25_, (GtkToolItem*) close, -1);
	_tmp26_ = self->priv->toolbar;
	_tmp27_ = draw_app_window_create_separator (self);
	_tmp28_ = _tmp27_;
	gtk_toolbar_insert (_tmp26_, _tmp28_, -1);
	_g_object_unref0 (_tmp28_);
	_tmp29_ = self->priv->toolbar;
	_tmp30_ = self->priv->label;
	gtk_toolbar_insert (_tmp29_, _tmp30_, -1);
	_tmp31_ = self->priv->toolbar;
	_tmp32_ = draw_app_window_create_separator (self);
	_tmp33_ = _tmp32_;
	gtk_toolbar_insert (_tmp31_, _tmp33_, -1);
	_g_object_unref0 (_tmp33_);
	_tmp34_ = self->priv->toolbar;
	gtk_toolbar_insert (_tmp34_, (GtkToolItem*) maximize, -1);
	_tmp35_ = self->priv->container;
	GTK_CONTAINER_CLASS (draw_app_window_parent_class)->add ((GtkContainer*) G_TYPE_CHECK_INSTANCE_CAST (self, GTK_TYPE_WINDOW, GtkWindow), (GtkWidget*) _tmp35_);
	_g_object_unref0 (maximize);
	_g_object_unref0 (close);
	return self;
}


DrawAppWindow* draw_app_window_new (void) {
	return draw_app_window_construct (DRAW_TYPE_APP_WINDOW);
}


static gboolean __lambda5_ (DrawAppWindow* self, cairo_t* cr) {
	gboolean result = FALSE;
	cairo_t* _tmp0_;
	cairo_t* _tmp1_;
	cairo_t* _tmp2_;
	cairo_pattern_t* _tmp3_;
	cairo_pattern_t* grad;
	cairo_t* _tmp4_;
	cairo_t* _tmp5_;
	g_return_val_if_fail (cr != NULL, FALSE);
	_tmp0_ = cr;
	cairo_move_to (_tmp0_, (gdouble) 0, (gdouble) 0);
	_tmp1_ = cr;
	cairo_line_to (_tmp1_, (gdouble) 0, (gdouble) 60);
	_tmp2_ = cr;
	cairo_set_line_width (_tmp2_, (gdouble) 1);
	_tmp3_ = cairo_pattern_create_linear ((gdouble) 0, (gdouble) 0, (gdouble) 0, (gdouble) DRAW_APP_WINDOW_HEIGHT);
	grad = _tmp3_;
	cairo_pattern_add_color_stop_rgba (grad, (gdouble) 0, 0.3, 0.3, 0.3, 0.4);
	cairo_pattern_add_color_stop_rgba (grad, 0.8, (gdouble) 0, (gdouble) 0, (gdouble) 0, (gdouble) 0);
	_tmp4_ = cr;
	cairo_set_source (_tmp4_, grad);
	_tmp5_ = cr;
	cairo_stroke (_tmp5_);
	result = TRUE;
	_cairo_pattern_destroy0 (grad);
	return result;
}


static gboolean ___lambda5__gtk_widget_draw (GtkWidget* _sender, cairo_t* cr, gpointer self) {
	gboolean result;
	result = __lambda5_ (self, cr);
	return result;
}


GtkToolItem* draw_app_window_create_separator (DrawAppWindow* self) {
	GtkToolItem* result = NULL;
	GtkToolItem* _tmp0_;
	GtkToolItem* sep;
	GtkStyleContext* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = gtk_tool_item_new ();
	g_object_ref_sink (_tmp0_);
	sep = _tmp0_;
	g_object_set ((GtkWidget*) sep, "height-request", DRAW_APP_WINDOW_HEIGHT, NULL);
	g_object_set ((GtkWidget*) sep, "width-request", 1, NULL);
	g_signal_connect_object ((GtkWidget*) sep, "draw", (GCallback) ___lambda5__gtk_widget_draw, self, 0);
	_tmp1_ = gtk_widget_get_style_context ((GtkWidget*) sep);
	gtk_style_context_add_class (_tmp1_, "sep");
	result = sep;
	return result;
}


static void draw_app_window_real_add (GtkContainer* base, GtkWidget* widget) {
	DrawAppWindow * self;
	GtkBox* _tmp0_;
	GtkWidget* _tmp1_;
	self = (DrawAppWindow*) base;
	g_return_if_fail (widget != NULL);
	_tmp0_ = self->priv->container;
	_tmp1_ = widget;
	gtk_box_pack_start (_tmp0_, _tmp1_, TRUE, TRUE, (guint) 0);
}


static void draw_app_window_real_remove (GtkContainer* base, GtkWidget* widget) {
	DrawAppWindow * self;
	GtkBox* _tmp0_;
	GtkWidget* _tmp1_;
	self = (DrawAppWindow*) base;
	g_return_if_fail (widget != NULL);
	_tmp0_ = self->priv->container;
	_tmp1_ = widget;
	gtk_container_remove ((GtkContainer*) _tmp0_, _tmp1_);
}


static void draw_app_window_real_show (GtkWidget* base) {
	DrawAppWindow * self;
	GdkWindow* _tmp0_ = NULL;
	self = (DrawAppWindow*) base;
	GTK_WIDGET_CLASS (draw_app_window_parent_class)->show ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, GTK_TYPE_WINDOW, GtkWindow));
	_tmp0_ = gtk_widget_get_window ((GtkWidget*) self);
	gdk_window_set_decorations (_tmp0_, GDK_DECOR_BORDER);
}


void draw_app_window_append_toolitem (DrawAppWindow* self, GtkToolItem* item, gboolean after_title) {
	gint _tmp0_ = 0;
	gboolean _tmp1_;
	GtkToolbar* _tmp7_;
	GtkToolItem* _tmp8_;
	gint _tmp9_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (item != NULL);
	_tmp1_ = after_title;
	if (_tmp1_) {
		GtkToolbar* _tmp2_;
		gint _tmp3_ = 0;
		_tmp2_ = self->priv->toolbar;
		_tmp3_ = gtk_toolbar_get_n_items (_tmp2_);
		_tmp0_ = _tmp3_ - 2;
	} else {
		GtkToolbar* _tmp4_;
		GtkToolItem* _tmp5_;
		gint _tmp6_ = 0;
		_tmp4_ = self->priv->toolbar;
		_tmp5_ = self->priv->label;
		_tmp6_ = gtk_toolbar_get_item_index (_tmp4_, _tmp5_);
		_tmp0_ = _tmp6_;
	}
	_tmp7_ = self->priv->toolbar;
	_tmp8_ = item;
	_tmp9_ = _tmp0_;
	gtk_toolbar_insert (_tmp7_, _tmp8_, _tmp9_);
}


const gchar* draw_app_window_get_title (DrawAppWindow* self) {
	const gchar* result;
	GtkLabel* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_title;
	_tmp1_ = gtk_label_get_label (_tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


void draw_app_window_set_title (DrawAppWindow* self, const gchar* value) {
	GtkLabel* _tmp0_;
	const gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_title;
	_tmp1_ = value;
	gtk_label_set_label (_tmp0_, _tmp1_);
	g_object_notify ((GObject *) self, "title");
}


gboolean draw_app_window_get_maximized (DrawAppWindow* self) {
	gboolean result;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_maximized;
	result = _tmp0_;
	return result;
}


static void draw_app_window_set_maximized (DrawAppWindow* self, gboolean value) {
	gboolean _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_maximized = _tmp0_;
	g_object_notify ((GObject *) self, "maximized");
}


static void draw_app_window_class_init (DrawAppWindowClass * klass) {
	draw_app_window_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (DrawAppWindowPrivate));
	GTK_CONTAINER_CLASS (klass)->add = draw_app_window_real_add;
	GTK_CONTAINER_CLASS (klass)->remove = draw_app_window_real_remove;
	GTK_WIDGET_CLASS (klass)->show = draw_app_window_real_show;
	G_OBJECT_CLASS (klass)->get_property = _vala_draw_app_window_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_draw_app_window_set_property;
	G_OBJECT_CLASS (klass)->finalize = draw_app_window_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), DRAW_APP_WINDOW_TITLE, g_param_spec_string ("title", "title", "title", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), DRAW_APP_WINDOW_MAXIMIZED, g_param_spec_boolean ("maximized", "maximized", "maximized", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void draw_app_window_instance_init (DrawAppWindow * self) {
	self->priv = DRAW_APP_WINDOW_GET_PRIVATE (self);
}


static void draw_app_window_finalize (GObject* obj) {
	DrawAppWindow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DRAW_TYPE_APP_WINDOW, DrawAppWindow);
	_g_object_unref0 (self->priv->container);
	_g_object_unref0 (self->priv->toolbar);
	_g_object_unref0 (self->priv->label);
	_g_object_unref0 (self->priv->_title);
	G_OBJECT_CLASS (draw_app_window_parent_class)->finalize (obj);
}


GType draw_app_window_get_type (void) {
	static volatile gsize draw_app_window_type_id__volatile = 0;
	if (g_once_init_enter (&draw_app_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DrawAppWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) draw_app_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DrawAppWindow), 0, (GInstanceInitFunc) draw_app_window_instance_init, NULL };
		GType draw_app_window_type_id;
		draw_app_window_type_id = g_type_register_static (GTK_TYPE_WINDOW, "DrawAppWindow", &g_define_type_info, 0);
		g_once_init_leave (&draw_app_window_type_id__volatile, draw_app_window_type_id);
	}
	return draw_app_window_type_id__volatile;
}


static void _vala_draw_app_window_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	DrawAppWindow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, DRAW_TYPE_APP_WINDOW, DrawAppWindow);
	switch (property_id) {
		case DRAW_APP_WINDOW_TITLE:
		g_value_set_string (value, draw_app_window_get_title (self));
		break;
		case DRAW_APP_WINDOW_MAXIMIZED:
		g_value_set_boolean (value, draw_app_window_get_maximized (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_draw_app_window_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	DrawAppWindow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, DRAW_TYPE_APP_WINDOW, DrawAppWindow);
	switch (property_id) {
		case DRAW_APP_WINDOW_TITLE:
		draw_app_window_set_title (self, g_value_get_string (value));
		break;
		case DRAW_APP_WINDOW_MAXIMIZED:
		draw_app_window_set_maximized (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



