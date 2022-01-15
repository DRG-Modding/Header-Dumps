#ifndef UE4SS_SDK_UI_EggHunt_Cheat_HPP
#define UE4SS_SDK_UI_EggHunt_Cheat_HPP

class UUI_EggHunt_Cheat_C : UUI_MissionCheat_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UVerticalBox* Left;
    TArray<ABP_AlienEgg_C*> Eggs;
    TArray<UCheatMenu_BasicButtonWText_C*> EggButtons;

    void Construct();
    void CustomEvent_1(UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_UI_EggHunt_Cheat(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, FString CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<UBP_AlienEgg_C*>& CallFunc_GetAllActorsOfClass_OutActors, UCheatMenu_BasicButtonWText_C* K2Node_CustomEvent_Button, int32 CallFunc_Array_Find_ReturnValue, UBP_AlienEgg_C* CallFunc_Array_Get_Item, OnClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UCheatMenu_BasicButtonWText_C* CallFunc_CreateButton_ReturnValue);
}

#endif
