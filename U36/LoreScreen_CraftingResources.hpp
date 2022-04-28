#ifndef UE4SS_SDK_LoreScreen_CraftingResources_HPP
#define UE4SS_SDK_LoreScreen_CraftingResources_HPP

class ULoreScreen_CraftingResources_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULore_ResourcesPage_C* Lore_ResourcesPage;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UAudioComponent* HoverSound;
    TArray<class UResourceData*> Resources;

    void GenerateResourceArray(TArray<class UResourceData*>& Resources, const TArray<FMM_ResourceInfo>& Array);
    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_CraftingResources(int32 EntryPoint);
};

#endif
