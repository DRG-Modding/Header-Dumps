#ifndef UE4SS_SDK_Cheat_GiveBeerBuff_Row_HPP
#define UE4SS_SDK_Cheat_GiveBeerBuff_Row_HPP

class UCheat_GiveBeerBuff_Row_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCheckBox* CheckBox_0;
    UTextBlock* TextBlock_BeerName;
    UTemporaryBuff* myBeerBuff;
    FCheat_GiveBeerBuff_Row_COn BeerbuffRow checked On BeerbuffRow checked;
    void On BeerbuffRow checked(UCheat_GiveBeerBuff_Row_C* Buff row to skip);

    void Set BeerBuff(UTemporaryBuff* berr buff in);
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Check if owned buff is the active buff();
    void ExecuteUbergraph_Cheat_GiveBeerBuff_Row(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UTemporaryBuff* K2Node_CustomEvent_berr_buff_in, AController* CallFunc_GetController_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked, FString CallFunc_GetDisplayName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_2, FSlateColor K2Node_MakeStruct_SlateColor_3);
    void On BeerbuffRow checked__DelegateSignature(UCheat_GiveBeerBuff_Row_C* Buff row to skip);
}

#endif
