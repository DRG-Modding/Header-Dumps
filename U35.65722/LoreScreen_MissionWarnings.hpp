#ifndef UE4SS_SDK_LoreScreen_MissionWarnings_HPP
#define UE4SS_SDK_LoreScreen_MissionWarnings_HPP

class ULoreScreen_MissionWarnings_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UScrollBox* ScrollBox_List;
    class UUniformGridPanel* UniformGridPanel_ItemHolder;
    class UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_MissionWarnings(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, const FLinearColor Temp_struct_Variable, class ULore_Container_WindowTextAndIcon_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UMissionWarning* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
};

#endif
