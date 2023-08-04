modded class PluginRecipesManagerBase
{
	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		RegisterRecipe(new DismantleHelipad);
		RegisterRecipe(new CraftFishRack);
		RegisterRecipe(new DismantleFootLocker);
	}	
}