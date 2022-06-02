#ifndef UE4SS_SDK_HUD_Resources_Player_HPP
#define UE4SS_SDK_HUD_Resources_Player_HPP

class UHUD_Resources_Player_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHUD_OptionalHudElement_C* HUD_OptionalHudElement;
    class UHorizontalBox* ResourceParent;
    class URetainerBox* Retainer;
    class APlayerCharacter* Character;
    class UResourcesComponent* ResourceComponent;
    bool LaserpointerEquipped;
    class UHUDVisibilityGroup* VisibilityGroup;
    int32 PreviewCount;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Add Resource(class UCappedResource* Resource);
    void OnResourceAdded(class UCappedResource* Resource);
    void OnResourceChanged(class UHUD_Resources_Player_Icon_C* ResourceIcon);
    void RefreshVisibility();
    void OnLaserPointerPressed_Event();
    void OnLaserPointerReleased_Event();
    void ExecuteUbergraph_HUD_Resources_Player(int32 EntryPoint);
};

#endif
