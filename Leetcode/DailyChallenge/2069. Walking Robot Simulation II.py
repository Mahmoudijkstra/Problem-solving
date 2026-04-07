class Robot:

    def __init__(self, width: int, height: int):
        self.width = width - 1
        self.height = height - 1
        self.total = 2 * (self.height + self.width)
        self.pos = 0
        self.moved = False

    def step(self, num: int) -> None:
        self.moved = True
        self.pos = (self.pos + num) % self.total

    def getPos(self) -> List[int]:
        if self.pos <= self.width:
            return [self.pos, 0]
        if self.pos <= self.width + self.height:
            return [self.width, self.pos - self.width]
        if self.pos <= 2 * self.width + self.height:
            return [self.width - (self.pos - (self.width + self.height)), self.height]
        return [0, self.height - (self.pos - (2 * self.width + self.height))]

    def getDir(self) -> str:
        if not self.moved:
            return "East"
        if self.pos == 0:
            return "South"
        if self.pos <= self.width:
            return "East"
        if self.pos <= self.width + self.height:
            return "North"
        if self.pos <= 2 * self.width + self.height:
            return "West"
        return "South"
