#ifndef UE4SS_SDK_LoreScreen_BrewingResources_HPP
#define UE4SS_SDK_LoreScreen_BrewingResources_HPP

class ULoreScreen_BrewingResources_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULore_ResourcesPage_C* Lore_ResourcesPage;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UAudioComponent* HoverSound;
    TArray<class UCollectableResourceData*> Resources;

    void GenerateResourceArray(TArray<class UCollectableResourceData*>& BeerResources, const TArray<FMM_ResourceInfo>& Array);
    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_BrewingResources(int32 EntryPoint);
};

#endif
