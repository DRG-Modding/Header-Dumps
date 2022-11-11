#ifndef UE4SS_SDK_ITM_CharacterBuffIcon_HPP
#define UE4SS_SDK_ITM_CharacterBuffIcon_HPP

class UITM_CharacterBuffIcon_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UImage* BarBuff;
    class USizeBox* SizeBox_0;
    class UTemporaryBuff* CurrentBuf;
    float Size;

    void OnLoaded_4CD03633471C127A79FA3D8CDA739676(class UObject* Loaded);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnTemporaryBuffChanged(class UTemporaryBuff* buff, class APlayerCharacter* AffectedPlayer);
    void ExecuteUbergraph_ITM_CharacterBuffIcon(int32 EntryPoint);
};

#endif
