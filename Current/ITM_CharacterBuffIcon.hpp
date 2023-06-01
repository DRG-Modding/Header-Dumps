#ifndef UE4SS_SDK_ITM_CharacterBuffIcon_HPP
#define UE4SS_SDK_ITM_CharacterBuffIcon_HPP

class UITM_CharacterBuffIcon_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UHorizontalBox* HBox_Beers;
    class USizeBox* SizeBox_0;
    float Size;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnTemporaryBuffChanged(class UTemporaryBuff* buff, class APlayerCharacter* AffectedPlayer);
    void ExecuteUbergraph_ITM_CharacterBuffIcon(int32 EntryPoint);
};

#endif
