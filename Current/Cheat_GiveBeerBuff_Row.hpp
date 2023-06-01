#ifndef UE4SS_SDK_Cheat_GiveBeerBuff_Row_HPP
#define UE4SS_SDK_Cheat_GiveBeerBuff_Row_HPP

class UCheat_GiveBeerBuff_Row_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheckBox* CheckBox_0;
    class UTextBlock* TextBlock_BeerName;
    class UTemporaryBuff* myBeerBuff;
    FCheat_GiveBeerBuff_Row_COn BeerbuffRow checked On BeerbuffRow checked;
    void On BeerbuffRow checked(class UCheat_GiveBeerBuff_Row_C* Buff row to skip);
    bool alreadyActive;

    void Set BeerBuff(class UTemporaryBuff* berr buff in);
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_64_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Check if owned buff is the active buff();
    void ExecuteUbergraph_Cheat_GiveBeerBuff_Row(int32 EntryPoint);
    void On BeerbuffRow checked__DelegateSignature(class UCheat_GiveBeerBuff_Row_C* Buff row to skip);
};

#endif
