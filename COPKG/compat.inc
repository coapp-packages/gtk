compatability-policy {
    minimum: "2.24.10.1";
    maximum: "${OneLessThanCurrent}";
    versions : {
		"2.24.10.1" // Not really used, but needed for the compatibility-policy to work properly.
    };
}

#define { author-version: "2.24.10"; }

#define { outercurve-publickeytoken: "1e373a58e25250cb"; }

#define { deps-publickeytoken: "${outercurve-publickeytoken}"; }

#define { glib-dep-version: "2.32.3"; }

#define { glib-dep-publickeytoken: "${deps-publickeytoken}"; }

#define { libintl-dep-version: "0.18.1"; }

#define { libintl-dep-publickeytoken: "${deps-publickeytoken}"; }

#define { pango-dep-version: "1.30.0"; }

#define { pango-dep-publickeytoken: "${deps-publickeytoken}"; }

#define { cairo-dep-version: "1.12.2"; }

#define { cairo-dep-publickeytoken: "${deps-publickeytoken}"; }

#define { gdk-pixbuf-dep-version: "2.24.1"; }

#define { gdk-pixbuf-dep-publickeytoken: "${deps-publickeytoken}"; }

#define { atk-dep-version: "2.2.0"; }

#define { atk-dep-publickeytoken: "${deps-publickeytoken}"; }
