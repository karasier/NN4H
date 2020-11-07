system :rom do
    [2].input :addr
    [8].output :data

    bit[8][-4].constant content: [0,1,2,3]

    data <= content[addr]
end
