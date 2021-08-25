// WidgetBlueprintGeneratedClass Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C
// Size: 0x281 (Inherited: 0x230)
struct ULobby_BarTop_Countdown_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Pulse; // 0x238(0x08)
	struct UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical; // 0x240(0x08)
	struct UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_1; // 0x248(0x08)
	struct UBorder* Border_29; // 0x250(0x08)
	struct UImage* Icon_Warning; // 0x258(0x08)
	struct UImage* Image_2; // 0x260(0x08)
	struct UImage* Image_3; // 0x268(0x08)
	struct UCanvasPanel* RootCanvas; // 0x270(0x08)
	struct UTextBlock* TimerText; // 0x278(0x08)
	bool Ansel; // 0x280(0x01)

	void Construct(); // Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.Construct
	void CountDownChanged(bool IsActive); // Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CountDownChanged
	void TimerChanged(float newTime); // Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.TimerChanged
	void HostCoundownChanged(bool IsActive); // Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.HostCoundownChanged
	void CustomEvent(float newTime); // Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CustomEvent
	void PreConstruct(bool IsDesignTime); // Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.PreConstruct
	void ExecuteUbergraph_Lobby_BarTop_Countdown(int32_t EntryPoint); // Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.ExecuteUbergraph_Lobby_BarTop_Countdown
};

