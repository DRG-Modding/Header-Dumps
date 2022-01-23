#ifndef UE4SS_SDK_Cheat_VanityTab_HPP
#define UE4SS_SDK_Cheat_VanityTab_HPP

class UCheat_VanityTab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheat_List_Pickaxe_C* Cheat_List_Pickaxe;
    class UCheat_List_VictoryMoves_C* Cheat_List_VictoryMoves;
    class UScrollBox* Content_ScrollBox;
    class UBasic_ButtonScalable2_C* Reload_Button;
    class UCheat_List_Vanity_C* Vanity_Armor;
    class UCheat_List_Vanity_C* Vanity_Hair;

    void Refresh(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UCheat_EquipList_C* K2Node_DynamicCast_AsCheat_Equip_List, bool K2Node_DynamicCast_bSuccess);
    void BndEvt__Reload_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnListChanged();
    void Construct();
    void ExecuteUbergraph_Cheat_VanityTab(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerControllerBase* K2Node_DynamicCast_AsFSDPlayer_Controller_Base, bool K2Node_DynamicCast_bSuccess, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, FExecuteUbergraph_Cheat_VanityTabK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UCheat_EquipList_C* K2Node_DynamicCast_AsCheat_Equip_List, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
