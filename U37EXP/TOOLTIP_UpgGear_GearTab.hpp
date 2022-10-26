#ifndef UE4SS_SDK_TOOLTIP_UpgGear_GearTab_HPP
#define UE4SS_SDK_TOOLTIP_UpgGear_GearTab_HPP

class UTOOLTIP_UpgGear_GearTab_C : public UUserWidget
{
    class UTextBlock* DATA_GearName;
    class UBorder* NameBG;

    void SetText(FText InText, TEnumAsByte<ENU_TextCase::Type> Text Case);
};

#endif
