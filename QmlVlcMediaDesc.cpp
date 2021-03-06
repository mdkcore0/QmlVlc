/*******************************************************************************
* Copyright (c) 2014, Sergey Radionov <rsatom_gmail.com>
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*   1. Redistributions of source code must retain the above copyright notice,
*      this list of conditions and the following disclaimer.
*   2. Redistributions in binary form must reproduce the above copyright notice,
*      this list of conditions and the following disclaimer in the documentation
*      and/or other materials provided with the distribution.

* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
* THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS
* BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
* OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
* OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
* WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/

#include "QmlVlcMediaDesc.h"

QString QmlVlcMediaDesc::get_meta( libvlc_meta_t e_meta )
{
    std::string meta = m_player.current_media().meta( e_meta );
    return QString::fromUtf8( meta.data(), meta.size() );
}

QString QmlVlcMediaDesc::get_title()
{
    return get_meta( libvlc_meta_Title );
}

QString QmlVlcMediaDesc::get_artist()
{
    return get_meta( libvlc_meta_Artist );
}

QString QmlVlcMediaDesc::get_genre()
{
    return get_meta( libvlc_meta_Genre );
}

QString QmlVlcMediaDesc::get_copyright()
{
    return get_meta( libvlc_meta_Copyright );
}

QString QmlVlcMediaDesc::get_album()
{
    return get_meta( libvlc_meta_Album );
}

QString QmlVlcMediaDesc::get_trackNumber()
{
    return get_meta( libvlc_meta_TrackNumber );
}

QString QmlVlcMediaDesc::get_description()
{
    return get_meta( libvlc_meta_Description );
}

QString QmlVlcMediaDesc::get_rating()
{
    return get_meta( libvlc_meta_Rating );
}

QString QmlVlcMediaDesc::get_date()
{
    return get_meta( libvlc_meta_Date );
}

QString QmlVlcMediaDesc::get_setting()
{
    return get_meta( libvlc_meta_Setting );
}

QString QmlVlcMediaDesc::get_URL()
{
    return get_meta( libvlc_meta_URL );
}

QString QmlVlcMediaDesc::get_language()
{
    return get_meta( libvlc_meta_Language );
}

QString QmlVlcMediaDesc::get_nowPlaying()
{
    return get_meta( libvlc_meta_NowPlaying );
}

QString QmlVlcMediaDesc::get_publisher()
{
    return get_meta( libvlc_meta_Publisher );
}

QString QmlVlcMediaDesc::get_encodedBy()
{
    return get_meta( libvlc_meta_EncodedBy );
}

QString QmlVlcMediaDesc::get_artworkURL()
{
    return get_meta( libvlc_meta_ArtworkURL );
}

QString QmlVlcMediaDesc::get_trackID()
{
    return get_meta( libvlc_meta_TrackID );
}
