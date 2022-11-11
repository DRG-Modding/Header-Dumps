#ifndef UE4SS_SDK_HUD_ActivatablePerks_HPP
#define UE4SS_SDK_HUD_ActivatablePerks_HPP

class UHUD_ActivatablePerks_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* WidgetBox;
    EPerkHUDActivationLocation Location;

    void SetPerks(TArray<class UPerkAsset*>& Array);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_ActivatablePerks(int32 EntryPoint);
};

#endif
