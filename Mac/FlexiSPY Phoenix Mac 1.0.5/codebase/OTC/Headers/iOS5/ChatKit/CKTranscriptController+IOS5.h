/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "UIViewController.h"
//
//#import "ABNewPersonViewControllerDelegate-Protocol.h"
//#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
//#import "ABPersonViewControllerDelegate-Protocol.h"
//#import "ABUnknownPersonViewControllerDelegate-Protocol.h"
//#import "AFContextProvider-Protocol.h"
//#import "CKTranscriptButtonViewDelegate-Protocol.h"
//#import "QLPreviewControllerDataSource-Protocol.h"
//#import "QLPreviewControllerDelegate-Protocol.h"
//#import "UIActionSheetDelegate-Protocol.h"
//#import "UIKeyInput-Protocol.h"
//#import "UIModalViewDelegate-Protocol.h"
//#import "UINavigationControllerDelegate-Protocol.h"
//#import "UITableViewDataSource-Protocol.h"
//#import "UITableViewDelegate-Protocol.h"
//
//@class ABPeoplePickerNavigationController, CKAggregateConversation, CKBalloonView, CKEffectsWindow, CKInteractiveImageBalloonView, CKLinksController, CKMediaObject, CKMessage, CKMessageComposition, CKMessageEncodingInfo, CKMessageEntryView, CKRecipientGenerator, CKRecipientListView, CKRecipientSelectionView, CKTimedQueue, CKTranscriptBubbleData, CKTranscriptHeaderView, CKTranscriptStatusController, CKTranscriptTableView, CKTranscriptToolbarView, CKTypingIndicatorView, EKICSPreviewController, NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSNotification, NSNumber, NSOperationQueue, NSString, QLPreviewController, UIBarButtonItem, UIImageView, UINavigationController, UINavigationItem, UITapGestureRecognizer, UIToolbar, UIView;
//
//@interface CKTranscriptController : UIViewController <UIActionSheetDelegate, UIModalViewDelegate, UITableViewDataSource, UITableViewDelegate, ABPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABUnknownPersonViewControllerDelegate, ABNewPersonViewControllerDelegate, CKTranscriptButtonViewDelegate, UINavigationControllerDelegate, AFContextProvider, UIKeyInput, QLPreviewControllerDataSource, QLPreviewControllerDelegate>
//{
//    EKICSPreviewController *_icsPreviewController;
//    CKAggregateConversation *_conversation;
//    UINavigationController *_navigationController;
//    UINavigationItem *_navItem;
//    CKTranscriptStatusController *_statusBar;
//    UIBarButtonItem *_actionItem;
//    UIBarButtonItem *_clearAllItem;
//    CKTranscriptToolbarView *_transcriptToolbarView;
//    CKTranscriptHeaderView *_transcriptHeaderView;
//    UIView *_backPlacard;
//    UIImageView *_transcriptTopShadow;
//    UIImageView *_transcriptLeftShadow;
//    CKTranscriptTableView *_transcriptTable;
//    CKRecipientListView *_recipientListView;
//    CKRecipientSelectionView *_recipientSelectionView;
//    CKMessageEntryView *_entryView;
//    CKBalloonView *_balloonToRestoreAfterRotation;
//    CKInteractiveImageBalloonView *_interactiveImageBalloonView;
//    UINavigationController *_fullscreenPhotoScrollerNavigationController;
//    CKTranscriptBubbleData *_bubbleInfo;
//    CKMessage *_lastMessage;
//    CKMessage *_lastSentMessage;
//    id <CKTranscriptComposeDelegate> _composeDelegate;
//    NSMutableArray *_outboundMessageLayers;
//    CKTypingIndicatorView *_typingIndicatorForSendAnimation;
//    NSMutableSet *_hiddenIndexPaths;
//    id _scrollBlock;
//    CKMessage *_smartForwardMessage;
//    NSMutableArray *_newCompositionRecipients;
//    NSMutableArray *_presetMessageParts;
//    NSArray *_newCompositionAddresses;
//    CKMediaObject *_previewItem;
//    int _previewRow;
//    NSString *_serviceAvailabilityKey;
//    QLPreviewController *_previewController;
//    CKMessageComposition *_newComposition;
//    CKMessageEncodingInfo *_textMessageEncodingInfo;
//    int _storedStatusBarStyle;
//    int _setupState;
//    BOOL _dimmed;
//    UITapGestureRecognizer *_loggingTapGestureRecognizer;
//    id _alertViewHandler;
//    unsigned int _rotationBlockingAnimationCount;
//    unsigned int _isDisablingAutorotation:1;
//    unsigned int _dirty:1;
//    unsigned int _locked:1;
//    unsigned int _visible:1;
//    unsigned int _viewNeedsSetup:1;
//    unsigned int _newRecipient:1;
//    unsigned int _rescroll:1;
//    unsigned int _sending:1;
//    unsigned int _recipientListShouldBeExpanded:1;
//    unsigned int _transitioningToTranscript:1;
//    unsigned int _entryViewCanAcceptFocus:1;
//    unsigned int _isAnimatingMessageSend:1;
//    unsigned int _didCancel:1;
//    unsigned int _entryViewWasActiveBeforeEdit:1;
//    unsigned int _entryViewWasActiveBeforePushingViewController:1;
//    unsigned int _entryViewWasActiveBeforeSwitchingConversations:1;
//    unsigned int _recipientSelectionViewWasActiveBeforePushingViewController:1;
//    unsigned int _showingRecipientSelectionResults:1;
//    unsigned int _automaticKeyboardWasDisabled:1;
//    unsigned int _togglingEditing:1;
//    unsigned int _keyboardUndocked:1;
//    unsigned int _suspendScrollDueToMediaViewing:1;
//    unsigned int _triedToResetEntryViewSizeWhileNotInAWindow:1;
//    unsigned int _triedToResetOverlayViewSizeWhileNotInAWindow:1;
//    unsigned int _preparingForResume:1;
//    unsigned int _appeared:1;
//    unsigned int _appearing:1;
//    unsigned int _settingConversation:1;
//    unsigned int _needsTransitionToFullTranscript:1;
//    unsigned int _heldUpdateCount;
//    unsigned int _transcriptNeedsUpdateAfterHold;
//    unsigned int _storedStatusBarIsHidden:1;
//    CKRecipientGenerator *_recipientGenerator;
//    NSDictionary *_abPropertiesCache;
//    ABPeoplePickerNavigationController *_peoplePickerController;
//    CKLinksController *_linkViewController;
//    UIToolbar *_actionsToolbar;
//    NSOperationQueue *_mediaPreviewQueue;
//    BOOL _canSafelyDismissImagePicker;
//    struct UIEdgeInsets _transcriptAreaInsets;
//    float _transcriptTableBottomOffset;
//    struct CGRect _keyboardScreenFrame;
//    struct CGRect _keyboardScreenFrameWithoutAccessoryView;
//    NSNotification *_keyboardNotification;
//    BOOL _showingKeyboard;
//    BOOL _hidingKeyboard;
//    BOOL _pushingKeyboard;
//    BOOL _animatingKeyboardDueToPush;
//    BOOL _kpgStartedAtBottomOfTranscript;
//    struct CGAffineTransform _kpgStartingTransform;
//    struct CGAffineTransform _kpgCurrentTransform;
//    float _kpgAnchorY;
//    int _pendingInterfaceOrientation;
//    BOOL _inRotation;
//    BOOL _willRotateView;
//    BOOL _shouldAdjustTranscriptOffsetForRotation;
//    CKTimedQueue *_statusQueue;
//    CKEffectsWindow *_effectsWindow;
//}

@interface CKTranscriptController (IOS5)

+ (id)tableColor;
- (id)init;
- (id)initWithNavigationController:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)viewWillUnload;
- (void)viewDidUnload;
- (BOOL)_canReloadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)_saveDraftState;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)dismissPreviewController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
//- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_entryViewWillRotate:(id)arg1;
- (void)_reflowTranscriptCells;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)rotatingFooterView;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)_updateBackPlacardSubviews;
- (void)_markMessagesAsReadIfNecessary;
- (void)_applicationBecameActive:(id)arg1;
- (void)parentControllerDidBecomeActive;
- (void)_screenLocked:(id)arg1;
- (void)_screenUnlocked:(id)arg1;
- (void)_changedStatusBarFrame:(id)arg1;
- (void)_performResume:(BOOL)arg1;
- (void)prepareForSuspend;
- (void)prepareForResume;
- (void)parentControllerDidResume:(BOOL)arg1;
- (void)systemApplicationWillEnterForeground;
- (void)_handleMadridLoginAccountStatusChangedNotification:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (void)_deferredMessageAppend:(id)arg1;
- (void)_deferredRemoveMessage:(id)arg1;
- (BOOL)_updateTableWithInsertedRows:(id)arg1;
- (BOOL)_updateTableWithInsertedRow:(int)arg1;
- (void)_updateTableWithDeletedRows:(id)arg1;
- (void)_updateTableWithDeletedRow:(int)arg1 rowAnimation:(int)arg2;
- (void)_updateTableWithDeletedRow:(int)arg1;
- (void)_deferredDeliveredRemoval:(id)arg1;
- (void)_deferredDeliveredHandling:(id)arg1;
- (void)_deferredUpdateError:(id)arg1;
- (void)_deferredReadHandling:(id)arg1;
- (void)_deferredSentHandling:(id)arg1;
- (void)_deferredHandleTypingIndicator:(id)arg1;
- (void)_defferredMessageContentChangeReceived:(id)arg1;
- (void)_deferredBatchHandleTypingIndicatorRemovedAndHandleMessageRecieved:(id)arg1;
- (BOOL)_messageIsForCurrentConversation:(id)arg1;
- (void)_messageReceived:(id)arg1;
- (void)_receivedMessageDeliveredNotification:(id)arg1;
- (void)_receivedMessageErrorNotification:(id)arg1;
- (void)_receivedMessageReadNotification:(id)arg1;
- (void)_receivedMessageSentNotification:(id)arg1;
- (void)_receivedMessageContentChangedNotification:(id)arg1;
- (void)_receivedMessageTypingNotification:(id)arg1;
- (void)_handleMessagePartsUpdated:(id)arg1;
- (void)_queueStatusAction:(int)arg1 message:(id)arg2 conversation:(id)arg3 delay:(double)arg4;
- (BOOL)_shouldBatchStatusActions:(id)arg1 messageIndex:(unsigned int *)arg2 typingIndicatorIndex:(unsigned int *)arg3;
- (void)_processDequeuedAction:(int)arg1 message:(id)arg2 conversation:(id)arg3;
- (void)_dequeueStatusActions;
- (void)timedQueueFired:(id)arg1;
- (void)_conversationDidBeginBatchUpdates:(id)arg1;
- (void)_conversationDidEndBatchUpdates:(id)arg1;
- (void)_receivedAggregateConversationPreferredServiceChangedNotification:(id)arg1;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (void)_stopAnimation:(id)arg1 exiting:(BOOL)arg2 decrementRotation:(BOOL)arg3;
- (struct CGPoint)bestVisibleOffsetForBubbleAtIndex:(int)arg1;
- (void)scrollBubbleIndexToVisible:(int)arg1;
- (void)_refreshViewForCurrentConversationIfNeeded;
- (void)setConversation:(id)arg1;
- (void)_reloadTranscriptLayerForcingBubbleDataReload:(BOOL)arg1;
- (void)_reloadTranscriptLayer;
- (void)reload:(BOOL)arg1;
- (id)conversation;
- (void)_setupRecipientSelectionView;
- (void)updateEntryView;
- (void)_setEntryViewSize:(struct CGSize)arg1 animate:(BOOL)arg2 animationLength:(float)arg3;
- (BOOL)isSendingMessage;
- (id)entryView;
- (void)_setupViewForConversation;
- (void)addPresetMessagePart:(id)arg1;
- (void)moveCursorToEnd;
- (id)effectsWindow;
- (void)updateTitle;
@property(nonatomic, getter=isDimmed) BOOL dimmed; // @synthesize dimmed=_dimmed;
- (void)updateActionItem;
- (id)clearAllItem;
- (void)updateNavigationButtons;
- (void)cancelButtonClicked:(id)arg1;
- (struct CGPoint)tableView:(id)arg1 newContentOffsetAfterUpdate:(struct CGPoint)arg2 context:(id)arg3;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id)arg2;
- (void)_deleteSelectedMessages:(id)arg1;
- (void)_deleteMessagesAtIndexPaths:(id)arg1;
- (void)_forwardSelectedMessages:(id)arg1;
- (void)actionButtonClicked:(id)arg1;
- (void)clearButtonClicked:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)_setupTranscriptHeader;
- (void)_clearExpandRecipientListFlag;
- (void)_updateTranscriptHeaderView;
- (void)_showTranscriptHeaderView;
- (void)_faceTimeAvailabilityChange:(id)arg1;
- (void)_hideTranscriptHeaderView;
- (id)bubbleData;
- (void)_unloadBubbleData;
- (void)_computeBubbleData:(BOOL)arg1;
- (id)appendMessageToBubbleData:(id)arg1;
- (void)_setMessagesHiddenForRows:(id)arg1;
- (int)numberOfRows;
- (void)accessibilityLargeTextDidChange;
- (void)_incrementRotationBlockingAnimationCount;
- (void)_decrementRotationBlockingAnimationCount;
- (struct CGPoint)_transcriptScrollToBottomOffsetWithHeightDelta:(float)arg1;
- (void)_beginTransitioningToTranscript;
- (void)_endTransitioningToTranscript;
- (void)transitionFromNewMessageToConversation;
- (float)_topPaddingForBubbleRow:(int)arg1;
- (float)_bottomPaddingForBubbleRow:(int)arg1;
- (float)_heightOfContactPhotoForMessageAtIndex:(int)arg1;
- (BOOL)_contactPhotoIsTallerThanMessageAtIndex:(int)arg1;
- (float)_topPaddingForRow:(int)arg1 forEditing:(BOOL)arg2;
- (void)startSendAnimationForMessage:(id)arg1;
- (void)_throwOutboundMessageToTable;
- (void)_finishSendAnimation;
- (void)_cancelMessageSendAnimation;
- (void)_beginHoldingUpdatesToTranscript;
- (void)_endHoldingUpdatesToTranscript;
- (void)updateTranscriptWithAnimation:(BOOL)arg1;
- (void)updateTranscript;
- (BOOL)_isHoldingUpdatesToTranscript;
- (void)clearCurrentMessageThread;
- (void)sendMessage:(id)arg1;
- (BOOL)_shouldShowSendAsSMSForMessage:(id)arg1;
- (id)_messageForMessageCell:(id)arg1;
- (void)messageCellTappedBalloon:(id)arg1;
- (void)messageCellTappedFailureButton:(id)arg1;
- (BOOL)messageCellShouldShowSendAsSMS:(id)arg1;
- (void)messageCellTappedSendAsSMS:(id)arg1;
- (void)scrollToMessageRowID:(int)arg1 partRowID:(int)arg2;
- (void)_finishedCreatingNewMessageForSending:(id)arg1;
- (void)_startCreatingNewMessageForSending:(id)arg1;
- (void)send:(id)arg1;
- (id)_bestServiceAvailableAndCanSend:(char *)arg1 error:(id *)arg2;
- (unsigned int)countOfRecipientsIfSendingMessageNow;
- (void)_updateCharacterCountReplacingCharactersInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (void)_updateCharacterCount;
- (void)_characterCountUISettingDidChangeNotification:(id)arg1;
- (void)_deliveryReceiptsEnabledDidChangeNotification:(id)arg1;
- (void)entryFieldDidBecomeActive:(id)arg1;
- (BOOL)entryFieldShouldBecomeActive:(id)arg1;
- (void)entryFieldAttachmentsChanged:(id)arg1;
- (void)entryFieldContentChanged:(id)arg1;
- (void)entryFieldSubjectChanged:(id)arg1;
- (BOOL)entryField:(id)arg1 shouldChangeSubjectTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)entryField:(id)arg1 shouldChangeContentTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)entryField:(id)arg1 shouldInsertMediaObject:(id)arg2;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (BOOL)getContainerWidth:(float *)arg1 offset:(float *)arg2;
- (BOOL)messageEntryView:(id)arg1 contentSizeChanged:(struct CGSize)arg2 animate:(BOOL)arg3;
- (BOOL)_resizeMessageEntryViewWithAnimate:(BOOL)arg1;
- (BOOL)_resizeMessageEntryView:(id)arg1 contentSize:(struct CGSize)arg2 animate:(BOOL)arg3;
- (id)composition;
- (void)clearComposition;
- (void)setMessageParts:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)findConversationForRecipients:(id)arg1 onService:(id)arg2;
- (id)recipients;
- (id)proposedRecipients;
- (void)setNewComposition:(id)arg1 addresses:(id)arg2;
- (void)_setupNewComposition;
- (void)_refreshViewForNewRecipientIfNeeded;
- (void)setupForNewRecipient;
- (BOOL)isNewRecipient;
- (void)addRecipient:(void *)arg1 identifier:(int)arg2 phoneNumber:(id)arg3 makingContentEntryViewActive:(BOOL)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)transcriptButtonView:(id)arg1 buttonClicked:(short)arg2;
- (void)_downgradeMessage:(id)arg1 validateSend:(BOOL)arg2;
- (void)_downgradeMessageAtIndexPath:(id)arg1;
- (void)_resendMessageAtIndexPath:(id)arg1;
- (void)_actuallyClearCurrentMessageThread;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)_editableAtIndexPath:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)_disclosureSupportsMediaObject:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)_abPersonViewControllerForPerson:(void *)arg1 property:(int)arg2 withIdentifier:(int)arg3;
- (void)_displayABPersonViewController:(id)arg1;
- (int)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(int)arg2;
- (void)showABCardForPerson:(void *)arg1 highlightedProperty:(int)arg2 identifier:(int)arg3;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)sharedShouldPresentMessageCompositionWithVCard:(id)arg1 filename:(id)arg2;
- (BOOL)personViewController:(id)arg1 shouldPresentMessageCompositionWithVCard:(id)arg2 filename:(id)arg3;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPresentMessageCompositionWithVCard:(id)arg2 filename:(id)arg3;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;
- (void)_updateUI;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (id)_unknownPersonViewControllerForProps:(id)arg1;
- (id)_personViewControllerForProps:(id)arg1;
- (void)showABCardForLinkProperties:(id)arg1;
- (void)showURLsForMessage:(id)arg1;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void *)arg2 insertProperty:(int *)arg3 copyInsertValue:(id *)arg4 copyInsertLabel:(id *)arg5;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void *)arg3;
- (void)dismissPeoplePicker:(id)arg1;
- (void)dismissPeoplePicker;
- (void)showPeoplePickerWithDelegate:(id)arg1;
- (void)tearDownPeoplePicker;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationController:(id)arg1 displayedMembersOfGroup:(void *)arg2;
- (void)peoplePickerNavigationControllerDisplayedGroups:(id)arg1;
- (void *)_newPersonWithValue:(struct __CFString *)arg1 forMultiValueProperty:(int)arg2;
- (void)showNewContactViewForEntity:(id)arg1;
- (void)showAddToExistingContactViewForEntity:(id)arg1;
- (id)navigationItem;
- (void)_setEntryViewVisible:(BOOL)arg1;
- (id)transcriptTable;
- (struct CGRect)clippedTargetRectForBalloon:(id)arg1;
- (void)restoreBalloonStateAfterRotation:(id)arg1;
- (void)balloonWillResignFirstResponder:(id)arg1;
- (void)balloonDidFinishDataDetectorAction:(id)arg1;
- (void)linksController:(id)arg1 showABCardForLinkProperties:(id)arg2;
- (void)recipientListView:(id)arg1 addressAtomClicked:(id)arg2;
- (void)recipientListView:(id)arg1 contentSizeDidChange:(struct CGSize)arg2;
- (void)recipientSelectionView:(id)arg1 contentSizeChanged:(struct CGSize)arg2;
- (BOOL)recipientSelectionView:(id)arg1 isValidAddress:(id)arg2;
- (void)recipientSelectionViewTextChanged:(id)arg1;
- (void)recipientSelectionViewReturnPressed:(id)arg1;
- (void)recipientSelectionView:(id)arg1 isShowingSearchResults:(BOOL)arg2;
- (void)recipientSelectionViewRecipientListChanged:(id)arg1;
- (void)recipientSelectionView:(id)arg1 showPeoplePickerWithDelegate:(id)arg2;
- (void)recipientSelectionViewFinishedWithPeoplePicker:(id)arg1;
- (id)recipientSelectionView:(id)arg1 recipientForAddress:(id)arg2;
- (id)recipientSelectionView:(id)arg1 recipientForRecord:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)recipientSelectionView:(id)arg1 recipientsForText:(id)arg2;
- (void)transcriptStatusBar:(id)arg1 showNavBarTitle:(id)arg2;
- (void)transcriptStatusBar:(id)arg1 showNavBarCustomView:(id)arg2;
- (BOOL)allowContextProvider:(id)arg1;
- (id)getCurrentContext;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (BOOL)_isGroupMessage;
- (void)_shrinkRecipientList;
- (BOOL)shouldDismissAfterSend;
- (id)_recipientGenerator;
- (BOOL)_isVisible;
- (void)_setVisible:(BOOL)arg1;
- (id)_actionsToolbar;
- (void)_updateActionsToolbarItems;
- (void)_updateActionsToolbarItemsForRotation:(int)arg1;
- (void)_makeContentEntryViewActive;
- (void)_makeRecipientEntryViewActive;
- (void)_makeFieldForFocusActive;
- (id)_fieldForFocus;
- (void)_deactivateContentEntryView;
- (void)_restoreEntryViewCursor;
- (struct CGSize)_idealSizeForEntryView:(struct CGSize)arg1;
- (void)_resetEntryViewSize;
- (void)_updatePhotoButtonEnabled;
- (void)showKeyboardForReply;
- (void)_updateFirstResponder;
- (void)_reflowMessageContent;
- (BOOL)canBecomeFirstResponder;
- (float)_accessoryViewHeight;
- (id)_entryView;
- (id)inputAccessoryView;
- (id)defaultFirstResponder;
- (BOOL)hasText;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (BOOL)isEditable;
- (float)_maxHeightForOverlayView:(id)arg1 entryViewResize:(int)arg2;
- (float)_overlayViewMinHeight;
- (id)_overlayView;
- (int)_atomStyleForRecipientListView;
- (void)_showRecipientListView;
- (void)_hideRecipientListView;
- (void)_updateRecipientListView:(BOOL)arg1;
- (void)_requeryIDStatuses;
- (id)_statusBar;
- (void)_refreshStatusBar;
- (void)_adjustCustomTitleViewFrame:(int)arg1;
- (void)_setupKeyboardPushGesture;
- (float)_heightOfSpaceAboveKeyboard:(struct CGRect)arg1 undocked:(BOOL)arg2;
- (float)_heightOfTopTranscriptArea;
- (float)_bottomInset;
- (void)_refreshTranscript;
- (void)_refreshTranscript:(BOOL)arg1;
- (void)_resetTranscriptInsets;
- (void)_calculateTopVisibleRow:(int *)arg1 andOffset:(float *)arg2 forTransitionToEditing:(BOOL)arg3;
- (struct CGPoint)_offsetForRow:(int)arg1 withInternalOffset:(float)arg2;
- (float)_maximumContentOffset;
//@property(nonatomic) NSNumber *canSafelyDismissImagePicker;
@property(nonatomic, assign) NSNumber *canSafelyDismissImagePicker;
- (BOOL)_shouldUseKeyWindowStack;
- (BOOL)_shouldUseDefaultFirstResponder;
- (BOOL)_shouldUseNextFirstResponder;
- (void)_handleSendAsSMSSettingChanged:(id)arg1;
- (id)_contactImageForMessage:(id)arg1;
- (id)_interactiveImageBalloonView;
- (id)_fullscreenPhotoScrollerNavigationController;
- (void)_hideEffectsWindowForMessageThrow:(BOOL)arg1;
- (void)_resizeEffectsWindowForMessageThrow;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)showActionSheet:(id)arg1 withPresenter:(id)arg2 withHandler:(void)arg3;
- (void)showPopover:(id)arg1 withPresenter:(id)arg2 withHandler:(void)arg3;
- (void)_handleMessageRemovedNotification:(id)arg1;
@property(copy, nonatomic) id alertHandler; // @synthesize alertHandler=_alertViewHandler;
@property(copy, nonatomic) id scrollBlock; // @synthesize scrollBlock=_scrollBlock;
@property(retain, nonatomic) NSMutableArray *presetMessageParts; // @synthesize presetMessageParts=_presetMessageParts;
//@property(nonatomic) id <CKTranscriptComposeDelegate> composeDelegate; // @synthesize composeDelegate=_composeDelegate;
@property(retain, nonatomic) CKMessage *smartForwardMessage; // @synthesize smartForwardMessage=_smartForwardMessage;

// Remaining properties
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) int returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) int spellCheckingType;

@end
