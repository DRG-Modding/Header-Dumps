#ifndef UE4SS_SDK_LoreScreen_CraftingResources_HPP
#define UE4SS_SDK_LoreScreen_CraftingResources_HPP

class ULoreScreen_CraftingResources_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULore_ResourcesPage_C* Lore_ResourcesPage;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UAudioComponent* HoverSound;
    TArray<class UResourceData*> Resources;

    void GenerateResourceArray(TArray<class UResourceData*>& Resources, const TArray<FMM_ResourceInfo>& Array, TArray<FMM_ResourceInfo> ResourceData, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UResourceData* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<FText>& K2Node_MakeArray_Array, bool CallFunc_IsObjectInMinersManual_ReturnValue, FMM_ResourceInfo K2Node_MakeStruct_MM_ResourceInfo, int32 CallFunc_Array_Add_ReturnValue);
    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_CraftingResources(int32 EntryPoint, TArray<FMM_ResourceInfo>& CallFunc_GenerateResourceArray_Array);
};

#endif
