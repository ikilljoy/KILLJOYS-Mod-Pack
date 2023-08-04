modded class PluginRecipesManagerBase
{
	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		RegisterRecipe(new CraftWolfHelmet);
		RegisterRecipe(new CraftBearHelmet);
		RegisterRecipe(new CraftToSniper);
		RegisterRecipe(new CraftToTrench);
		RegisterRecipe(new CraftToDefault);
	}	
}