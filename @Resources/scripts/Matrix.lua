function Initialize()
  default = {{1,0,0,0,0}, {0,1,0,0,0}, {0,0,1,0,0}, {0,0,0,1,0}, {0,0,0,0,1}}
  dawn = {{0.5771806415306519, -0.05207895481521974, 0.32602478689264475, 0, 0}, {0.3462206377905974, 0.48313224358999163, -0.23516468548063502, 0, 0}, {-0.37340127932124934, 0.11894671122522803, 0.45913989858799026, 0, 0}, {0, 0, 0, 1, 0}, {0.028575, 0.028575, 0.028575, 0, 1}}
  invert = {{-1,0,0,0,0}, {0,-1,0,0,0}, {0,0,-1,0,0}, {0,0,0,1,0}, {1,1,1,0,1}}
end

function CalculateMatrix(startMatrix, endMatrix, animationLength, count)
  local difference = {}
   for i=1, 5 do
     difference[i] = {}
     for j=1, 5 do
       difference[i][j] = ((startMatrix[i][j] - endMatrix[i][j]) / animationLength)
      end
   end

   local string = ""
   for i=1, 5 do
     for j=1, 5 do
       if j < 5 then
         string = string..(startMatrix[i][j] - (difference[i][j] * count))..';'
       else
         string = string..(startMatrix[i][j] - (difference[i][j] * count))
         SKIN:Bang('!SetVariable MatrixRow'..i..' '..string)
         string = ""
       end
     end
   end
end
