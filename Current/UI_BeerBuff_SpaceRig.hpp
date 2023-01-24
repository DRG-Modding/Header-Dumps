#ifndef UE4SS_SDK_UI_BeerBuff_SpaceRig_HPP
#define UE4SS_SDK_UI_BeerBuff_SpaceRig_HPP

class UUI_BeerBuff_Spacerig_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BuffImage;
    class USizeBox* SizeBox_3;

    void OnLoaded_E76038A2482A1272456904B10D0684E1(class UObject* Loaded);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void On Buff Changed(class UTemporaryBuff* buff);
    void ExecuteUbergraph_UI_BeerBuff_Spacerig(int32 EntryPoint);
};

#endif
