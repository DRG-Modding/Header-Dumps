#ifndef UE4SS_SDK_LoreScreen_BrewingResources_HPP
#define UE4SS_SDK_LoreScreen_BrewingResources_HPP

class ULoreScreen_BrewingResources_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULore_ResourcesPage_C* Lore_ResourcesPage;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UAudioComponent* HoverSound;
    TArray<class UCollectableResourceData*> Resources;

    void GenerateResourceArray(TArray<class UCollectableResourceData*>& BeerResources, const TArray<FMM_ResourceInfo>& Array, TArray<FMM_ResourceInfo> ResourceData, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UCollectableResourceData* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<FText>& K2Node_MakeArray_Array, bool CallFunc_IsObjectInMinersManual_ReturnValue, FMM_ResourceInfo K2Node_MakeStruct_MM_ResourceInfo, int32 CallFunc_Array_Add_ReturnValue);
    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_BrewingResources(int32 EntryPoint, TArray<FMM_ResourceInfo>& CallFunc_GenerateResourceArray_Array);
};

#endif
