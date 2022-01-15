#ifndef UE4SS_SDK_LoreScreen_Spacerig_HPP
#define UE4SS_SDK_LoreScreen_Spacerig_HPP

class ULoreScreen_Spacerig_C : ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton_Spacerig_Map_Circle_C* AbyssBar;
    UButton_Spacerig_Map_Circle_C* AssignmentTerminal;
    UCanvasPanel* CanvasPanel_Holder;
    UButton_Spacerig_Map_Circle_C* DeepDives;
    UButton_Spacerig_Map_Circle_C* DroneModification;
    UButton_Spacerig_Map_Circle_C* DropPod;
    UButton_Spacerig_Map_Circle_C* Equipment;
    UButton_Spacerig_Map_Circle_C* Forge;
    UImage* Image_167;
    UButton_Spacerig_Map_Circle_C* Jukebox;
    ULoreScreen_Template_C* LoreScreen_Template;
    UButton_Spacerig_Map_Circle_C* MedicalFacility;
    UButton_Spacerig_Map_Circle_C* MemorialHall;
    UButton_Spacerig_Map_Circle_C* MineralTrade;
    UButton_Spacerig_Map_Circle_C* MissionTerminal;
    UButton_Spacerig_Map_Circle_C* PersonalCabin3;
    UButton_Spacerig_Map_Circle_C* pickAxe;
    UButton_Spacerig_Map_Circle_C* SeasonTerminal;
    UButton_Spacerig_Map_Circle_C* Shop;
    ULore_Container_PictureOverText_C* TerminalDescriptino;
    UButton_Spacerig_Map_Circle_C* WardRobe1;
    UAudioComponent* HoverSound;
    float Xmin;
    float Xmax;
    float Ymin;
    float Ymax;
    bool HasHovered;
    UButton_Spacerig_Map_Circle_C* ActiveButton;

    void Construct();
    void RefreshContent();
    void OnHover(UButton_Spacerig_Map_Circle_C* Button, UMinersManualData* Data);
    void PlayButtonPings();
    void OnUnhover(UButton_Spacerig_Map_Circle_C* Button);
    void ExecuteUbergraph_LoreScreen_Spacerig(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UButton_Spacerig_Map_Circle_C* K2Node_CustomEvent_Button_1, UMinersManualData* K2Node_CustomEvent_Data, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, TArray<UButton_Spacerig_Map_Circle_C*>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue, UButton_Spacerig_Map_Circle_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_GetGlobalTimeDilation_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_IntFloat_ReturnValue, int32 Temp_int_Array_Index_Variable_1, UButton_Spacerig_Map_Circle_C* K2Node_CustomEvent_Button, UWidget* CallFunc_Array_Get_Item_1, UButton_Spacerig_Map_Circle_C* K2Node_DynamicCast_AsButton_Spacerig_Map_Circle, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, OnUnhovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnHovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
}

#endif
