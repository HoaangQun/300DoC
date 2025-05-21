from manim import *

class Main(Scene):
    def construct(self):
        dung = Text("n là số nguyên tố", font_size=35)
        sai = Text("n không phải số nguyên tố", font_size=35)
        dung.set_color_by_gradient(GREEN)
        sai.set_color_by_gradient(RED)

        quan = Text("@hoaangqun",
                    font_size=25)
        quan.set_color_by_gradient(WHITE, BLUE)

        title = Text("Số nguyên tố", font_size=60)
        title.set_color_by_gradient(BLUE, GREEN_A)

        dinh_nghia = Text("Định nghĩa", font_size=40)
        dinh_nghia.set_color_by_gradient(RED, WHITE)
        dinh_nghia_p = Text("Số nguyên tố là số lớn hơn 1 chỉ có hai ước\nlà 1 và chính nó (2, 3, 5, 7, 11, 13, 17, 19, ...)", font_size=30)
        dinh_nghia_p.set_color_by_gradient(WHITE)

        self.play(Write(title))
        self.wait(1.5)
        
        self.play(title.animate.shift(UP * 3))
        self.play(title.animate.scale(0.75))
        self.play(FadeIn(quan), quan.animate.shift(DOWN * 3.5))
        dinh_nghia.move_to(title.get_center())
        self.play(Transform(title, dinh_nghia))
        self.wait(0.3)
        
        self.play(Write(dinh_nghia_p))
        self.wait(2)
        self.play(Unwrite(dinh_nghia_p))

        thuat_toan = Text("Thuật toán", font_size=40)
        thuat_toan.set_color_by_gradient(BLUE, WHITE)
        thuat_toan.move_to(dinh_nghia.get_center())
        self.play(Transform(title, thuat_toan))
        self.wait(0.3)

        textn = Text("Nhận n là một số nguyên thì:", font_size=30)
        textn.set_color_by_gradient(WHITE)
        self.play(FadeIn(textn), textn.animate.shift(UP * 2))
        text1 = Text("nếu n nhỏ hơn 2", font_size=30)
        text1.set_color_by_gradient(WHITE)
        self.play(Write(text1), text1.animate.shift(UP))
        self.wait(0.7)
        self.play(FadeIn(sai))
        self.wait(0.5)
        text2 = Text("nếu n bằng 2", font_size=30)
        text2.set_color_by_gradient(WHITE)
        text2.move_to(text1.get_center())
        self.play(Transform(text1, text2))
        self.wait(0.7)
        self.play(Transform(sai, dung))
        self.wait(0.5)
        text2 = Text("nếu n chia hết cho 2", font_size=30)
        text2.move_to(text1.get_center())
        self.play(Transform(text1, text2))
        self.wait(0.7)
        self.play(Transform(sai, Text("n không phải số nguyên tố", font_size=35).set_color_by_gradient(RED)))
        self.wait(1.5)
        self.play(FadeOut(sai), FadeOut(text1))

        text2 = Text("Khi số kiểm tra không nằm trong những trường hợp trên.\nTa thực hiện chạy kiểm tra xem n có ước số lẻ hay không", font_size=28)
        text2.move_to(textn.get_center())
        self.play(Transform(textn, text2))
        self.wait(1)
        text1 = Text("nếu n có ước là số lẻ", font_size=30)
        text1.set_color_by_gradient(WHITE)
        self.play(Write(text1), text1.animate.shift(UP))
        self.wait(0.7)
        self.play(FadeIn(sai))
        self.wait(0.5)
        text2 = Text("nếu kết quả vẫn không thì n chính là số nguyên tố", font_size=35).set_color_by_gradient(GREEN)
        self.play(FadeOut(text1), Transform(sai, text2))
        self.wait(1)
        code = Text("Trình bày bằng code", font_size=40).set_color_by_gradient(PURPLE_A, WHITE, PURPLE_B)
        code.move_to(dinh_nghia.get_center())
        self.play(Transform(title, code))
        self.play(FadeOut(textn), FadeOut(sai))
        solution = Text("def prime (n):\n    if n < 2: return False\n    if n == 2: return True\n    if n%2 == 0: return False\n    for j in range (3, n, 2):\n        if n%j == 0: return False\n    return True", font="CaskaydiaCove Nerd Font Mono", line_spacing=1.2, font_size=30, t2c={
                "def": PURPLE,
                "if": PURPLE,
                "return": PURPLE,
                "for": PURPLE,
                "prime": BLUE,
                "range": BLUE,
                "False": RED,
                "True": RED,
                "2": ORANGE,
                "3":ORANGE
            })

        self.play(Write(solution))
        self.wait(3)
        self.play(Transform(solution, Text("chỉ vậy thôi :))", font_size=35).set_color_by_gradient(PINK, WHITE)))
        self.wait(0.8)
        self.play(FadeOut(title), FadeOut(solution))
        self.play(quan.animate.shift(UP * 3.5))
        self.play(quan.animate.scale(2))
        self.play(Unwrite(quan))

        self.wait(0.5)
