class CfgPatches 
{
	class hellbz_bury_body {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		author[]= {"HellBz"}; 	
	};
};
class CfgFunctions 
{
	class EnigmaRevive
	{
		class main 
		{
			file = "\hellbz_bury_body\init";
			class init
			{
				preInit = 1;
			};
			class postinit
			{
				postInit = 1;
			};
		};
	};
};

