uniform sampler2D texture;
uniform lowp float qt_Opacity;

varying highp vec2 fTex;
varying lowp float fFade;

void main() {
    gl_FragColor = texture2D(texture, fTex) * (fFade * qt_Opacity);
}
