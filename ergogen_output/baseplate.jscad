function cutout_extrude_1_outline_fn(){
    return new CSG.Path2D([[-14.25,13.0630053],[-14.25,93.0246911]]).appendArc([-10.2747672,97.0246144],{"radius":4,"clockwise":true,"large":false}).appendPoint([143.2252328,97.9750788]).appendArc([147.25,93.9751555],{"radius":4,"clockwise":true,"large":false}).appendPoint([147.25,16.6134575]).appendArc([148.9959392,13.3090347],{"radius":4,"clockwise":false,"large":false}).appendPoint([175.362661,-4.6766137]).appendArc([176.7627821,-9.6079829],{"radius":4,"clockwise":true,"large":false}).appendPoint([167.9788942,-29.3369182]).appendArc([163.1269701,-31.5264381],{"radius":4,"clockwise":true,"large":false}).appendPoint([107.2033174,-13.975619]).appendArc([105.9865937,-13.7921302],{"radius":4,"clockwise":false,"large":false}).appendPoint([11.2635906,-14.241631]).appendArc([8.3043009,-12.9536105],{"radius":4,"clockwise":true,"large":false}).appendPoint([-13.190308,10.3510708]).appendArc([-14.25,13.0630053],{"radius":4,"clockwise":true,"large":false}).close().innerToCAG()
.extrude({ offset: [0, 0, 1] });
}




                function baseplate_case_fn() {
                    

                // creating part 0 of case baseplate
                let baseplate__part_0 = cutout_extrude_1_outline_fn();

                // make sure that rotations are relative
                let baseplate__part_0_bounds = baseplate__part_0.getBounds();
                let baseplate__part_0_x = baseplate__part_0_bounds[0].x + (baseplate__part_0_bounds[1].x - baseplate__part_0_bounds[0].x) / 2
                let baseplate__part_0_y = baseplate__part_0_bounds[0].y + (baseplate__part_0_bounds[1].y - baseplate__part_0_bounds[0].y) / 2
                baseplate__part_0 = translate([-baseplate__part_0_x, -baseplate__part_0_y, 0], baseplate__part_0);
                baseplate__part_0 = rotate([0,0,0], baseplate__part_0);
                baseplate__part_0 = translate([baseplate__part_0_x, baseplate__part_0_y, 0], baseplate__part_0);

                baseplate__part_0 = translate([0,0,0], baseplate__part_0);
                let result = baseplate__part_0;
                
            
                    return result;
                }
            
            
        
            function main() {
                return baseplate_case_fn();
            }

        